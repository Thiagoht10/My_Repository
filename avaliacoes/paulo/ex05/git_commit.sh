#!/bin/sh
#Shell script for displaying the last 5 entries from the git repository.

# Calls the log function of "git", formats the output of "log" so it displays the hash of each commit
# and grabs the latest 5 hashes.

git log --format='%H' -n5
