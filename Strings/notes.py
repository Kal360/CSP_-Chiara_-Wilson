# Chiara Wilson, Strings Notes Python

# string is a data type that pulls any  information surronded by quotation marks. "" ''

note="Chiara's class"

#name= (input(" What is your first name?\n").strip().capitalize())

#print(f"Hello {name} welcome to my thingy!\n")

#print(" This is your name "+ name)

sentence= "The quick brown fox jumps over the lazy dog."

#print(len(sentence))
start= sentence.find("brown")
length=len("brown fox")
print(sentence[start:start+length])