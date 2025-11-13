# ⚡ Projeto Eletrônico – Omega Sumo (PCB)

Esta pasta contém o **projeto eletrônico** do robô autônomo de sumô **Omega Sumo**, desenvolvido no contexto do Trabalho de Conclusão de Curso (TCC) em Engenharia de Computação da UTFPR – Câmpus Pato Branco.

O circuito foi projetado no **Autodesk EAGLE 9.x**, abrangendo os módulos de potência, controle e sensores do robô.  
O objetivo do projeto é fornecer uma base estável e modular para o sistema embarcado do robô, compatível com o microcontrolador **STM32F407VET6**.

---

## 🧩 Estrutura dos Arquivos

| Arquivo | Descrição |
|-----------------|------------|
| `OmegaSumo.sch` | Esquemático principal do circuito eletrônico, contendo o microcontrolador, drivers de motor, sensores e interfaces de comunicação. |
| `OmegaSumo.brd` | Layout da placa de circuito impresso (PCB), desenvolvido a partir do esquemático. |
| `pcb_top.png` | Imagens 2D e/ou 3D da placa geradas no EAGLE. |
| `pcb_bottom.png` | Imagens 2D e/ou 3D da placa geradas no EAGLE. |
| `OmegaSumo_PCB.zip` | Arquivo compactado contendo todos os arquivos nativos do projeto EAGLE. |

---

## ⚙️ Especificações Técnicas

- **Software:** Autodesk EAGLE 9.x  
- **Camadas:** 2 (dupla face)  
- **Dimensões aproximadas:** conforme layout (otimizado para o chassi do robô Omega Sumo)  
- **Alimentação:** 7,4 V (Li-Po 2S)  
- **Tensão lógica:** 3,3 V  
- **Controlador principal:** STM32F407VET6  
- **Interfaces principais:** sensores IR, sensores de linha, drivers de motor, botão de start, LEDs de status  

---

## 🛠️ Como Abrir o Projeto

1. Instale o **Autodesk EAGLE** (versão 9.x ou superior).  
2. Baixe e extraia o arquivo [`OmegaSumo_PCB.zip`](./OmegaSumo_PCB.zip).  
3. Abra o arquivo `OmegaSumo.sch` no EAGLE.  
4. Verifique o esquemático e sincronize com o layout (`OmegaSumo.brd`) caso necessário.  
5. Gere os arquivos Gerber para fabricação em **File → CAM Processor → Generate Gerbers**.

---

## ⚠️ Boas Práticas de Projeto

- Mantenha trilhas de potência largas (≥ 1 mm para corrente de motor).  
- Utilize planos de terra (`GND Plane`) para reduzir ruído e interferência.  
- Separe áreas de potência e lógica no layout.  
- Verifique a orientação de componentes polarizados (diodos, capacitores eletrolíticos, conectores).  
- Sempre execute o **DRC (Design Rule Check)** antes da geração dos Gerbers.

---

## 📜 Licença

Este projeto é distribuído para **fins acadêmicos e de pesquisa**, sendo permitido seu uso como referência em estudos e trabalhos relacionados a sistemas embarcados e robótica móvel.  
É proibido o uso comercial sem autorização do autor.

---

## ✍️ Autor

**Fabio Kinukawa**  
Trabalho de Conclusão de Curso – Engenharia de Computação  
UTFPR – Universidade Tecnológica Federal do Paraná  
Equipe: **PatoBots**
