class Estudiante:
    def __init__(self, nombre):
        self.nombre = nombre
        self.notas = []

    def agregar_nota(self, nota):
        self.notas.append(nota)

    def estadisticas(self):
        ordenadas = sorted(self.notas)
        maxima = ordenadas[-1]
        minima = ordenadas[0]
        promedio = round(sum(self.notas) / len(self.notas))
        return ordenadas, maxima, minima, promedio


class Curso:
    def __init__(self):
        self.estudiantes = []

    def agregar_estudiante(self, estudiante):
        self.estudiantes.append(estudiante)

    def mostrar_resultados(self):
        todas_las_notas = []

        for est in self.estudiantes:
            ordenadas, maxima, minima, promedio = est.estadisticas()
            todas_las_notas.extend(est.notas)

            print("\nEstudiante:", est.nombre)
            print("  Notas:", ordenadas)
            print("  Máxima:", maxima)
            print("  Mínima:", minima)
            print("  Promedio:", promedio)

        promedio_total = round(sum(todas_las_notas) / len(todas_las_notas))
        print("\nPromedio total del curso:", promedio_total)


curso = Curso()

cantidad_estudiantes = int(input("¿Cuántos estudiantes vas a ingresar?: "))

for i in range(cantidad_estudiantes):
    print("\nNombre del estudiante", i + 1, ": ")
    nombre = input()
    estudiante = Estudiante(nombre)

    print("¿Cuántas notas tiene", nombre, "?: ")
    cantidad_notas = int(input())

    for j in range(cantidad_notas):
        nota = int(input("   Ingresa una nota: "))
        estudiante.agregar_nota(nota)

    curso.agregar_estudiante(estudiante)

curso.mostrar_resultados()
