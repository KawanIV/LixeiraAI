# Análise Ética e Relatório de Vieses

**Análise Ética:**
*   **Privacidade:** O sistema não coleta dados do usuário, apenas detecta a presença de material.
*   **Inclusão:** O design é pensado para ser acessível e educativo.
*   **Impacto Ambiental:** A tecnologia (Arduino) tem baixo consumo energético, o que é positivo para a sustentabilidade.

**Relatório de Vieses (Falsos Positivos/Negativos):**
*   **Viés de Detecção:** Sensores indutivos e capacitivos podem falhar se o resíduo estiver sujo (ex: uma lata de metal com muita gordura pode não ser detectada).
*   **Mitigação:** O protótipo inclui um "modo de segurança" (botão de reset no Arduino) que pode ser acionado manualmente caso o sistema trave.