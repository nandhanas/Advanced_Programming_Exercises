### myrange

#implement `myrange` that acts like `range`
# define a function `myrange`
# define a class `MyRange`

import time
class MyRange():
    def __init__(self, *args):
        self.list = list([])
        if len(args) == 1:
            self.stop = args[0]
        elif len(args) == 2:
            self.start = args[0]
            self.stop = args[1]
        elif len(args) == 3:
            self.start = args[0]
            self.stop = args[1]
            self.step = args[2]
        elif len(args) == 0:
            raise ValueError("Too few arguements")
        else:
            raise ValueError("Too many arguements")
        self.myrange(*args)
        
    def myrange(self, *args):
        if len(args) == 1:
            i = 0
            while i < self.stop:
                self.list.append(i)
                i = i+1
        elif len(args) == 2:
            i = self.start
            while i < self.stop:
                self.list.append(i)
                i = i+1
        elif len(args) == 3:
            i = self.start
            while i < self.stop:
                self.list.append(i)
                i = i+ self.step
    
    def __str__(self):
        return repr(self.list)
    
    def __enter__(self):
        self.startTime = time.time()
        
    def __exit__(self, exc_type, exc_value, traceback):
        self.stopTime = time.time()
        self.timeElapsed = self.stopTime - self.startTime
        print("Elapsed Time =", self.timeElapsed)
    
#Context Manager
with MyRange(3,20) as Range:
    print("Time is being calculated")
    
#UnitTests

import unittest
class TestMyModule(unittest.TestCase):
    def test_range_arg1(self):
        self.assertEqual(MyRange(3).list, [0,1,2])
    
    def test_range_arg2(self):
        self.assertEqual(MyRange(1,3).list, [1,2])
       
    def test_range_arg3(self):
        self.assertEqual(MyRange(0,5,2).list, [0,2,4])
    
    def test_range_arg1_value(self):
        self.assertEqual(MyRange(3).stop,3)
       
    def test_range_arg2_values(self):
        r = MyRange(1,3)
        self.assertEqual(r.start,1)
        self.assertEqual(r.stop,3)
        
    def test_range_arg2_values(self):
        r = MyRange(0,5,2)
        self.assertEqual(r.start,0)
        self.assertEqual(r.stop,5)
        self.assertEqual(r.step,2)
        
    def test_range_errors(self):
        self.assertRaises(ValueError,lambda: MyRange())
        self.assertRaises(ValueError,lambda: MyRange(1,2,3,4))
        
if __name__ == '__main__':
    unittest.main()