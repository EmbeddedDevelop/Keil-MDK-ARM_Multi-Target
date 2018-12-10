/**
  ******************************************************************************
  * @�ļ���     �� bsp_usart.h
  * @����       �� strongerHuang
  * @�汾       �� V1.0.0
  * @����       �� 2018��12��10��
  * @ժҪ       �� USART�ײ�����ͷ�ļ�
  ******************************************************************************/

/* �����ֹ�ݹ���� ----------------------------------------------------------*/
#ifndef _BSP_USART_H
#define _BSP_USART_H

/* ������ͷ�ļ� --------------------------------------------------------------*/
#include "stm32f10x.h"
#include <stdio.h>


/* �궨�� --------------------------------------------------------------------*/
/* DEBUG */
#define DEBUG_COM                 USART1
#define DEBUG_COM_CLK             RCC_APB2Periph_USART1
#define DEBUG_COM_TX_GPIO_CLK     RCC_APB2Periph_GPIOA     //UART TX
#define DEBUG_COM_TX_PIN          GPIO_Pin_9
#define DEBUG_COM_TX_GPIO_PORT    GPIOA
#define DEBUG_COM_RX_GPIO_CLK     RCC_APB2Periph_GPIOA     //UART RX
#define DEBUG_COM_RX_PIN          GPIO_Pin_10
#define DEBUG_COM_RX_GPIO_PORT    GPIOA
#define DEBUG_COM_IRQn            USART1_IRQn
#define DEBUG_COM_Priority        10                       //���ȼ�
#define DEBUG_COM_BaudRate        115200                   //������
#define DEBUG_COM_IRQHandler      USART1_IRQHandler        //�жϺ����ӿ�(��stm32f10x_it.c)

/* �������� ------------------------------------------------------------------*/
void DEBUG_SendByte(uint8_t Data);
void DEBUG_SendNByte(uint8_t *pData, uint16_t Length);

void USART_Initializes(void);


#endif /* _BSP_USART_H */

/**** Copyright (C)2018 strongerHuang. All Rights Reserved **** END OF FILE ****/
