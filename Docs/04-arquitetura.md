# Arquitetura do Sistema (Três Caixas) e Canvas

## Arquitetura em Três Caixas

1. **Entrada:** Sensores (Indutivo para Metal, Capacitivo para Plástico/Vidro e Botões para simular o Papel). O usuário aproxima o objeto.
2. **Processamento:** O microcontrolador Arduino Uno. Ele lê os sinais elétricos dos sensores, processa no código (`.ino`) e decide qual ação tomar.
3. **Saída:** Servo motor (responsável por abrir/fechar a tampa física) e LED (sinalizador de status para o usuário).

## Canvas do Eixo Computação
*   **Hardware:** Arduino Uno, sensores, servo motores, LEDs.
*   **Software:** Linguagem C++ no Arduino IDE (ou Tinkercad).
*   **Lógica:** Estruturas condicionais (`if/else`) para triagem.

## Canvas do Eixo Sociedade
*   **Objetivo Social:** Promover a educação ambiental e a coleta seletiva correta.
*   **Público:** Comunidade escolar.
*   **Benefício:** Redução do trabalho manual na separação de resíduos.

## Canvas do Eixo Meio Ambiente
*   **Benefício:** Redução da contaminação de materiais recicláveis (vidro quebrado misturado com papel, por exemplo).
*   **Descarte:** Componentes eletrônicos têm ciclo de vida longo, e o protótipo é uma ferramenta de conscientização para a redução de resíduos.