print("---MENU---")
print("1- Convertir celsius a fahrenheit")
print("2- Convertir fahrenheit a celsius")
decision = int(input(""))

def conversion(decision):
    if decision == 1:
        celsius = int(input("Ingrese la temperatura en grados celsius: "))
        Fahrenheit = (celsius * 1.8) +32
        resultado = Fahrenheit
        grados = "°F"
        return resultado, grados
    elif decision == 2:
        Fahrenheit = float(input("Ingrese la temperatura en grados Fahrenheit: "))
        celsius = (Fahrenheit - 32)/1.8
        resultado = celsius
        grados = "°C"
        return resultado, grados
    else:
        print("Ingreso una opcion incorrecta, reinicie el programa")

unidad, grados = conversion(decision)
print("Su conversion es de ", unidad,grados)
