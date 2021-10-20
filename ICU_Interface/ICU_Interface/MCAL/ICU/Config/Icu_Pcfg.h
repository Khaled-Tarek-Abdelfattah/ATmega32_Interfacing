/**************************************************************************
 * FileName:Icu_Pcfg.h                                                         *
 *                                                                        *
 * Created: 10/20/2021 4:12:49 PM										  *
 *                                                                        *
 *  Author: Khaled Tarek                                                  *
 ***************************************************************************/ 

#ifndef ICU_PCFG_H_
#define ICU_PCFG_H_

/*!Comment:Set this bit to reduce the noises */
#define INPUT_CAPTUR_NOISE_CANCLER						(7U)
/*!Comment:Check this flag while polling to know the status of Input,
		then you must clear it by applying logic 1 */
#define INPUT_CAPTUR_INTERRUPT_FLAG						(5U)

#define TIMER1_RESOLUTION								(1024)



#endif /* ICU.PCFG_H_ */