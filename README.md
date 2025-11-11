# 🤖 Robô Lutador de Sumô Autônomo de 3 kg

Este repositório contém o projeto **Omega Sumo**, um robô autônomo de sumô de 3 kg, desenvolvido como parte do **Trabalho de Conclusão de Curso (TCC)** em Engenharia de Computação da UTFPR – Campus Pato Branco.

O projeto aborda a **atualização de hardware e software** do robô, com foco na implementação de um **sistema supervisório baseado em SED (Sistemas a Eventos Discretos)**, visando estratégias eficientes e melhoria de desempenho em combate.

---

## ⚙️ Estrutura do Repositório

| Pasta | Descrição |
|-------|------------|
| [`Firmware/`](./Firmware) | Contém o código embarcado para o microcontrolador STM32F407VET6, implementando controle de sensores, motores e o supervisor em tempo real. |
| [`Supervisor/`](./Supervisor) | Contém o modelo supervisório desenvolvido no Supremica (`omega_sumo.wmod`), compactado em `.zip`, reunindo as plantas, especificações e supervisor. |

---
## ⚙️ Descrição Técnica

O sistema embarcado é baseado em um **modelo supervisório** obtido pela **Teoria de Controle Supervisório (Supervisory Control Theory – SCT)**.  
A **planta** e as **especificações** foram modeladas de forma **modular** e **compostas sincronicamente**, resultando em um supervisor determinístico responsável por garantir **coordenação** e **exclusão mútua** entre eventos.

O supervisor foi modelado no **Supremica**, com base na **Teoria de Controle Supervisório (Supervisory Control Theory – SCT)**.

O **supervisor sintetizado** foi convertido automaticamente em código C e integrado ao microcontrolador **STM32**, responsável pelo controle autônomo do robô.

---

## 📜 Licença e Uso
Este projeto foi desenvolvido para fins **acadêmicos e de pesquisa**.  
Os arquivos gerados pelo Supremica são distribuídos conforme sua licença de uso educativo.  
O código-fonte embarcado pode ser reutilizado livremente para fins não comerciais, com citação do autor.

---

## 👤 Autor

**Fabio Kinukawa**  
Engenharia de Computação — UTFPR  
