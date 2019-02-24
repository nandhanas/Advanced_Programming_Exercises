import copy
class Sequence():
    def __init__(self, components):
        self._components = list(copy.deepcopy(components))
        
    def __len__(self):
        return len(self._components)
    
    def __iter__(self):
        return iter(self._components)
    
    def __getitem__(self,index):
        return self._components[index]
    
    def __eq__(self,other):
        return len(self) == len(other) and all(a==b for a,b in zip(self,other))
        #return self._components == other._components # would be sufficient
    
    def __delitem__(self,index):
        del self._components[index]
    
    def __setitem__(self,key,value):
        self._components[key] = value
    
    def insert(self, key, value):
        self._components.insert(key,value)
        
    def __str__(self):
        return repr(self._components)
    
    def __copy__(self):
        return copy.deepcopy(self._components)
    
    def append(self, value):
        self._components.append(value)
        
s = Sequence(range(10))
print(s)
len(s)
other_s = Sequence(range(9))
s == other_s
print(s[-1])
s[0] = 1
print(s)
del s[1:4:2]
print(s)
for x in s:
    print(x)
s.insert(0, 0)
print(s)
s.append(10)
print(s)
s2 = copy.copy(s)
print(s2)
s == s2        

