def soma (x,y):
  return x + y
def mult (x,y):
  return x * y
def div (x,y):
  return x // y
def sub (x,y):
  return x - y

print("Calculadora em Python")
print("\Selecione a opção \n")
print("selecione a opcao desejada")
print("1 - soma")
print("2- mult")
print("3 - div")
print("4 - sub")

option = int(input("digite sua opção 1,2,3,4): "))

if option <= 0 or option > 4:
    print("\nOpção inválida!\n")
    exit(0)

num1 = int(input("\nDigite o primeiro número: "))
num2 = int(input("\nDigite o segundo número: "))

if option == 1:
  print(soma(num1, num2))
if option == 2:
  print(mult(num1, num2))
if option == 3:
  print(div(num1, num2))
if option == 4:
  print(sub(num1, num2))