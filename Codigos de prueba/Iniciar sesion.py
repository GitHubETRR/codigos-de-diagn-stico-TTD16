import random
import string 

def generador_contraseña(longitud):
    letras = string.ascii_letters
    numeros = string.digits
    simbolos = string.punctuation
    
    cont_letras = int(longitud*0.6)
    cont_digitos = int(longitud*0.3)
    cont_punctuation = int(longitud*0.1)
    
    contraseña = "".join([random.choice(letras) for _ in range(cont_letras)] + [random.choice(numeros) for _ in range(cont_digitos)] + [random.choice(simbolos) for _ in range(cont_punctuation)])
    
    return contraseña

print("Bienvenido, porfavor cree su usuario")
Nombre_usuario = input("Nombre de usuario: ")
print("Perfecto", Nombre_usuario)
Decision= input("Ahora porfavor, eliga si quiere crear su contraseña o generar una aleatoria (para esto, ingrese 1 si quiere crear una contraseña o ingrese 0 si quiere generar una): ")

if int(Decision) == 1:
    Contraseña = input("\nPerfecto, ahora puede crear su contraseña: ")
    print("\n---USUARIO---")
    print("Nombre de usuario:", Nombre_usuario)
    print("Contraseña:", Contraseña)
elif int(Decision) == 0:
    Longitud_contraseña = input("Perfecto, ahora ingrese que tan larga sea la contraseña: ")
    print("Su contraseña sera ", generador_contraseña(Longitud_contraseña))
else:
    print("No ingreso un 1 ni un 0, reinicie el programa")
    
print(generador_contraseña(3))
