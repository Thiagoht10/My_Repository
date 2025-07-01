#!/bin/bash

# ARCH
arch=$(uname -a)

# CPU PHYSICAL
cpuf=$(grep "physical id" /proc/cpuinfo | wc -l)

# CPU VIRTUAL
cpuv=$(grep "processor" /proc/cpuinfo | wc -l)

# RAM
ram_total=$(LANG=C free -m | awk '/Mem:/ {print $2}')
ram_use=$(LANG=C free -m | awk '/Mem:/ {print $3}')
ram_percent=$(LANG=C free -m | awk '/Mem:/ {printf("%.2f"), $3/$2*100}')

# DISC
disk_total=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf("%.1fGb"), disk_t/1024}')
disk_use=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')
disk_percent=$(df -m | grep "/dev/" | grep -v "/boot" |awk '{disk_u += $3; disk_t += $2} END {printf("%d"), disk_u / disk_t * 100}')

# CPU LOAD
cpu_fin=$(timeout 2s vmstat 1 2 | tail -1 | awk '{printf "%.1f", 100 - $15}')

# LAST BOOT
lb=$(who -b | awk '{print $(NF-1) " " $NF}')

# LVM USE
lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)

# TCP CONNEXIONS
tcpc=$(ss -ta | grep ESTAB | wc -l)

# USER LOG
ulog=$(users | wc -w)

# NETWORK
ip=$(hostname -I)
mac=$(ip link | grep "link/ether" | awk '{print $2}')

# SUDO
cmnd=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

msg="	Architecture: $arch
	CPU physical: $cpuf
	vCPU: $cpuv
	Memory Usage: $ram_use/${ram_total}MB ($ram_percent%)
	Disk Usage: $disk_use/${disk_total} ($disk_percent%)
	CPU load: $cpu_fin%
	Last boot: $lb
	LVM use: $lvmu
	Connections TCP: $tcpc ESTABLISHED
	User log: $ulog
	Network: IP $ip ($mac)
	Sudo : $cmnd cmd"

if who | grep -q "tty"; then
	wall "$msg"
fi
