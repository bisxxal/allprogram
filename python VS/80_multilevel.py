class base:
    def __init__(self , name ):
     self.name = name

    def showdetail(self):
     print(f'dog name is {self.name}')

class derived (base):
    def __init__(self , bread ,name):
      self.bread = bread
      base.__init__(self , name)

    def showdetail(self):
      base.showdetail(self)
      print(f'dog bread is {self.bread}')

class derived2 (derived ):
    
    def __init__(self, color ,bread , name):
      self.color = color
      derived.__init__(self , bread ,name)

    def showdetail(self):
      derived.showdetail(self)
      print(f'dog colour is {self.color}')

d  = derived2('white' , 'syberian Huskey' , 'Husk')

d.showdetail()