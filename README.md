# 🤖 Robô Lutador de Sumô Autônomo de 3 kg

Este repositório contém o projeto **Omega Sumo**, um robô autônomo de sumô de 3 kg, desenvolvido como parte do **Trabalho de Conclusão de Curso (TCC)** em Engenharia de Computação da UTFPR – Campus Pato Branco.

O projeto aborda a **atualização de hardware e software** do robô, com foco na implementação de um **sistema supervisório baseado em SED (Sistemas a Eventos Discretos)**, visando estratégias eficientes e melhoria de desempenho em combate.

---

## ⚙️ Estrutura do Repositório

| Pasta | Descrição |
|-------|------------|
| [`Firmware/`](./Firmware) | Contém o código embarcado para o microcontrolador STM32F407VET6, implementando controle de sensores, motores e o supervisor em tempo real. |
| [`Supervisor/`](./Supervisor) | Contém o modelo supervisório desenvolvido no Supremica (`omega_sumo.wmod`), compactado em `.zip`, reunindo as plantas, especificações e supervisor. |
| [`PCB/`](./PCB) | Projeto eletrônico do robô, incluindo esquemáticos e layout da placa. |


---
## 🧰 Ferramentas Utilizadas
- [Supremica](https://www.supremica.org) – Modelagem e síntese supervisória (uso acadêmico)  
- [STM32CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html) – Desenvolvimento e compilação do firmware  
- [Autodesk EAGLE](https://www.autodesk.com/products/eagle/overview) – Desenvolvimento do projeto eletrônico e layout de PCB  
- [GitHub](https://github.com/) – Controle de versão e compartilhamento do projeto  

---

## 📜 Licença e Uso
Este projeto foi desenvolvido para fins **acadêmicos e de pesquisa**.  
Os arquivos gerados pelo Supremica são distribuídos conforme sua licença de uso educativo.  
O código-fonte embarcado e o projeto eletrônico podem ser reutilizados livremente para fins não comerciais, com a devida citação do autor.


---

## 👤 Autor

**Fabio Kinukawa**  
Engenharia de Computação — UTFPR  
