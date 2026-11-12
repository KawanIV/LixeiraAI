# Diário da Aula 06 - Desenvolvimento do MVP

**O que foi feito:**
*   Montagem física no simulador Tinkercad com Arduino Uno, 1 servo motor, 4 botões (simulando os sensores) e 1 LED.
*   Implementação do código em C++ para ler os botões e acionar o servo motor.
*   Correção de bugs relacionados ao "ruído" elétrico nos botões (uso de resistores de 10kΩ).
*   Organização da estrutura de arquivos e documentação do repositório.
*   Montagem de protótipo físico usando materiais disponibilizados pela universidade.

**O que travou:**
*   O servo motor não girava porque os fios estavam ligados apenas à protoboard e não diretamente aos pinos do Arduino (o simulador não reconhecia a energia).
*   O LED piscava sem parar porque o Tinkercad lia ruído nos pinos de entrada, exigindo a implementação correta dos resistores de pull-down.

**Próximo passo:**
*   Adicionar os outros 3 servos motores (totalizando 4) para simular as 4 tampas.
*   Implementar a lógica de acessibilidade (um buzzer para emitir som quando a tampa abrir, auxiliando pessoas com deficiência visual).
*   Implementar uma analise de uso da lixeira para entender padrão de consumo das pessoas e melhorar oferta de produtos e onde colocar mais lixeiras;