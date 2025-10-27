sentence=input("Enter any sentence: ")
new=sentence.lower()
vowels="aeiou"
for char in new:
    if char in vowels:
        new=new.replace(char,"*")
    else:
        char
print("the",new)