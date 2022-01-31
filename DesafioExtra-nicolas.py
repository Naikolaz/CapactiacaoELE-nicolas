prateleira = ['arduino','servoMotor', 'potenciometro', 'LEDverm', 'LEDverd', 'resistor1', 'resistor100k']
precoPrat = [74, 5, 1.9 , 1, 1, 0.1, 0.5]

comprados = ['resistor100k','resistor100k', 'servoMotor', 'arduino', 'arduino', 'potenciometro', 'resistor1', 'LEDverm','LEDverm','LEDverm', 'LEDverd','LEDverd']

precoPago = [0.7,1, 5, 100,74,2.5,0.1, 1,1,2,2,1]

m = dict(zip(prateleira, precoPrat))
c=0

for i in range(12):
    if m[comprados[i]] != precoPago[i]:
        c+=1

print("A quantidade de erros foi: " + str(c))