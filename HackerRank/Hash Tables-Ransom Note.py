def checkMagazine(magazine, note):
    lista = note.split()
    counter= len(note.split())
  
    for word in lista:
        if magazine.find(word) >= 0:
            counter -= 1
            magazine = magazine.replace(word, '', 1)

    if counter == 0:
        print('Yes')
    else:
        print('No')