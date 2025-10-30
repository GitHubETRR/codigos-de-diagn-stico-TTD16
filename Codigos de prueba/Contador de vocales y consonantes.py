def cont_vocales(text):
    vocales = "aeiou"
    contador_vocales = sum(1 for letra in text if letra in vocales)
    return contador_vocales

def cont_consonantes(text):
    consonantes = "qwrtypsdfghjklñzxcvbnm"
    contador_consonantes = sum(1 for letra in text if letra in consonantes)
    return contador_consonantes

text = input("Ingrese la palabra que quiera: ").lower()
print("Su palabra tiene ", cont_vocales(text), " vocales y ", cont_consonantes(text), "consonantes")
