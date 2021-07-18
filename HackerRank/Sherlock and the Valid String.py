def isValid(s):
    string_aux = []
    igual = False
    j, aux = 0, 0

    string_aux.append(s[0])
    tam = len(string_aux)

    for i in range(0,len(s)):
        while j < tam:
            if s[i] == string_aux[j]:
                igual = True
            j += 1
        if igual != True:
            string_aux.append(s[i])
            tam += 1
        if igual == True:
            igual = False
        j = 0

    arr_aux = [0] * len(string_aux) 

    for i in range(len(s)):
        for j in range(len(string_aux)):
            if s[i] == string_aux[j]:
                arr_aux[j] += 1

    aux = arr_aux[0]
    x = 0

    for i in range(1, len(arr_aux)):
        if aux != arr_aux[i]:
            x += 1

    if x > 1:
        return 'NO'
    else:
        return 'YES'