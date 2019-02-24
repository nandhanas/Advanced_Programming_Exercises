str_list = ['test','mad']
reverseWord = lambda x: x[::-1]
OrderedList =sorted([reverseWord(str) for str in str_list])
print (OrderedList)