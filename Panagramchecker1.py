def is_pangram(text):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    
    text = text.lower()

    for letter in alphabet:
        if letter not in text:
            return False

    return True


# Get user input
sentence = input("Enter a sentence: ")

# Check pangram
if is_pangram(sentence):
    print("It is a Pangram")
else:
    print("It is NOT a Pangram")