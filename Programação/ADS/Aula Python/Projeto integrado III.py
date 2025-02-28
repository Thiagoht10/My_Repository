def remove(self, valor):
    if self.head.data == valor:
        self.head = self.head.nextItem
    else:
        before = None
        navegar = self.head
    while navegar and navegar.data != valor:
        before = navegar
        navegar = navegar.nextItem
    if navegar:
        before.nextItem = navegar.nextItem
    else:
        before.nextItem = None
        
head -> 4 -> 2 -> 8 -> None
