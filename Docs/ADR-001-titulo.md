# ADR-001: Substituição de Sensores Físicos por Botões no Simulador

**Contexto:** 
Durante o desenvolvimento no simulador Tinkercad, percebemos que a plataforma não oferece sensores indutivos e capacitivos nativos. Precisávamos de uma forma de simular a entrada de dados para validar a lógica do código.

**Decisão:**
Optamos por substituir os sensores de material por botões (Push Buttons) ligados aos pinos digitais (2, 3, 4 e 5) do Arduino. A lógica do código foi adaptada para ler esses botões como se fossem os sensores.

**Consequências:**
*   *Positivas:* O código pode ser validado e o servo motor é acionado corretamente. A simulação roda sem erros.
*   *Negativas:* A simulação não detecta o material de forma automática, sendo necessária a interação humana para simular a detecção.

**Impacto nos Três Eixos:**
*   **Computação:** Mudança na lógica de `INPUT_PULLUP` para `INPUT` com resistores de 10kΩ (para evitar ruído no simulador).
*   **Sociedade:** A usabilidade na simulação foi mantida (o usuário precisa saber qual botão apertar).
*   **Meio Ambiente:** A validação do código evita o desperdício de componentes físicos antes da implementação real.