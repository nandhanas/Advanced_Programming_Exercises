from collections import *

def is_palindrome(string_var):     
    '''
    returns True if string_var is palindrome, False otherwise
    '''
    ret = None
    ########################
    # code here
    if string_var.lower() == string_var[::-1].lower():
        ret = True
    else:
        ret = False
    ########################
    return ret 

def histogram_letters(string_var):     
    '''
    count how many times a letter is present in the string_var
    and returns a dict

    '''
    ret = None
    ########################
    # code here
    histogram = OrderedDict((letter,0) for letter in string_var)
    for letter in string_var:
        histogram[letter] +=1
    ret = histogram  
    ########################
    return ret 

def get_most_frequent(list_var):
    '''
    returns a tuple with the most frequent object in the list with the 
    corresponing number
    '''
    ret = None
    ########################
    # code here
    ret = Counter(list_var).most_common(1)[0]
    # most_common returns returns a list of tuples - this is an ordered list of the highest count to the lowest count
    ########################
    return ret

def which_duplicates(list_var):
    '''
    return a dict with containing the repeted object and the number of repetitions
    '''
    ret = None
    ########################
    # code here
    dic = Counter(list_var)
    ret = Counter(obj for obj in dic.elements() if dic[obj] >1)
    # elements returns an iterator over elements repeating each as many times as its count
    ########################
    return ret


def compute_factorial(int_val):
    '''
    returns factorial of a number
    '''
    ret = None
    ########################
    # code here
    fact = 1  
    for i in range(1,int_val+1): 
        fact = fact * i 
    ret = fact
    ########################
    return ret


def is_prime(int_val):
    '''
    returns True if int_val is prime, False otherwise
    '''
    ret = None
    ########################
    # code here
    ret = not any(int_val%a == 0 for a in range(2, int_val))
    ########################
    return ret

print("Is madam Palindrome?",is_palindrome('madam'))
print("Is test Palindrome",is_palindrome('test'))
print("Histogram:", histogram_letters('madamkjhewfkjh'))
print("Most Frequent:", get_most_frequent(['1','2','3','4','1','4','4']))
print("Duplicates with Frequency", which_duplicates(['1','2','3','4','12','4','4']))
print("Factorial of 3", compute_factorial(3))
print("If 8 is Prime", is_prime(8))
print("If 3 is Prime", is_prime(3))

