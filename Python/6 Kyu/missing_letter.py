// https://www.codewars.com/kata/5839edaa6754d6fec10000a2

def find_missing_letter(chars):
    startID = ord(chars[0])
    i = 1
    while True:
        if ord(chars[i]) != startID + i:
            return chr(startID+i)
        i += 1

