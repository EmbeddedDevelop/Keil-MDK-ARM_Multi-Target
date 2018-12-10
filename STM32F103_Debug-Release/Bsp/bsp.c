/**
  ******************************************************************************
  * @�ļ���     �� bsp.c
  * @����       �� strongerHuang
  * @�汾       �� V1.0.0
  * @����       �� 2018��12��10��
  * @ժҪ       �� BSP�ײ�Դ�ļ�
  ******************************************************************************/
/*----------------------------------------------------------------------------
  ������־:
  2018-12-10 V1.0.0:��ʼ�汾
  ----------------------------------------------------------------------------*/
/* ������ͷ�ļ� --------------------------------------------------------------*/
#include "bsp.h"
#include "bsp_usart.h"


/************************************************
�������� �� LED_Initializes
��    �� �� LED��ʼ��
��    �� �� ��
�� �� ֵ �� ��
��    �� �� strongerHuang
*************************************************/
void LED_Initializes(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;

  /* ʹ��ʱ�� */
  RCC_APB2PeriphClockCmd(LED_GPIO_CLK, ENABLE);

  /* �������� */
  GPIO_InitStructure.GPIO_Pin   = LED_PIN;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_Out_PP;
  GPIO_Init(LED_GPIO_PORT, &GPIO_InitStructure);

  LED_OFF();
}

/************************************************
�������� �� BSP_Initializes
��    �� �� �ײ��ʼ��
��    �� �� ��
�� �� ֵ �� ��
��    �� �� strongerHuang
*************************************************/
void BSP_Initializes(void)
{
  LED_Initializes();                             //LED��ʼ��
  USART_Initializes();                           //USART��ʼ��
}


/**** Copyright (C)2018 strongerHuang. All Rights Reserved **** END OF FILE ****/
