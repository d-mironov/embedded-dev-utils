#include "register.h"
#include "stm32f411.h"

stm32f4::regs::_adc_common stm32f4::regs::adc_common = {
	.CSR = Field<32>(0x40012300),
	.CCR = Field<32>(0x40012304),
};
stm32f4::regs::_adc stm32f4::regs::adc1 = {
	.SR = Field<32>(0x40012000),
	.CR1 = Field<32>(0x40012004),
	.CR2 = Field<32>(0x40012008),
	.SMPR1 = Field<32>(0x4001200c),
	.SMPR2 = Field<32>(0x40012010),
	.JOFR1 = Field<32>(0x40012014),
	.JOFR2 = Field<32>(0x40012018),
	.JOFR3 = Field<32>(0x4001201c),
	.JOFR4 = Field<32>(0x40012020),
	.HTR = Field<32>(0x40012024),
	.LTR = Field<32>(0x40012028),
	.SQR1 = Field<32>(0x4001202c),
	.SQR2 = Field<32>(0x40012030),
	.SQR3 = Field<32>(0x40012034),
	.JSQR = Field<32>(0x40012038),
	.JDR1 = Field<32>(0x4001203c),
	.JDR2 = Field<32>(0x40012040),
	.JDR3 = Field<32>(0x40012044),
	.JDR4 = Field<32>(0x40012048),
	.DR = Field<32>(0x4001204c),
};
stm32f4::regs::_crc stm32f4::regs::crc = {
	.DR = Field<32>(0x40023000),
	.IDR = Field<32>(0x40023004),
	.CR = Field<32>(0x40023008),
};
stm32f4::regs::_dbg stm32f4::regs::dbg = {
	.DBGMCU_IDCODE = Field<32>(0xe0042000),
	.DBGMCU_CR = Field<32>(0xe0042004),
	.DBGMCU_APB1_FZ = Field<32>(0xe0042008),
	.DBGMCU_APB2_FZ = Field<32>(0xe004200c),
};
stm32f4::regs::_exti stm32f4::regs::exti = {
	.IMR = Field<32>(0x40013c00),
	.EMR = Field<32>(0x40013c04),
	.RTSR = Field<32>(0x40013c08),
	.FTSR = Field<32>(0x40013c0c),
	.SWIER = Field<32>(0x40013c10),
	.PR = Field<32>(0x40013c14),
};
stm32f4::regs::_flash stm32f4::regs::flash = {
	.ACR = Field<32>(0x40023c00),
	.KEYR = Field<32>(0x40023c04),
	.OPTKEYR = Field<32>(0x40023c08),
	.SR = Field<32>(0x40023c0c),
	.CR = Field<32>(0x40023c10),
	.OPTCR = Field<32>(0x40023c14),
};
stm32f4::regs::_iwdg stm32f4::regs::iwdg = {
	.KR = Field<32>(0x40003000),
	.PR = Field<32>(0x40003004),
	.RLR = Field<32>(0x40003008),
	.SR = Field<32>(0x4000300c),
};
stm32f4::regs::_otg_fs_device stm32f4::regs::otg_fs_device = {
	.FS_DCFG = Field<32>(0x50000800),
	.FS_DCTL = Field<32>(0x50000804),
	.FS_DSTS = Field<32>(0x50000808),
	.FS_DIEPMSK = Field<32>(0x50000810),
	.FS_DOEPMSK = Field<32>(0x50000814),
	.FS_DAINT = Field<32>(0x50000818),
	.FS_DAINTMSK = Field<32>(0x5000081c),
	.DVBUSDIS = Field<32>(0x50000828),
	.DVBUSPULSE = Field<32>(0x5000082c),
	.DIEPEMPMSK = Field<32>(0x50000834),
	.FS_DIEPCTL0 = Field<32>(0x50000900),
	.DIEPCTL1 = Field<32>(0x50000920),
	.DIEPCTL2 = Field<32>(0x50000940),
	.DIEPCTL3 = Field<32>(0x50000960),
	.DOEPCTL0 = Field<32>(0x50000b00),
	.DOEPCTL1 = Field<32>(0x50000b20),
	.DOEPCTL2 = Field<32>(0x50000b40),
	.DOEPCTL3 = Field<32>(0x50000b60),
	.DIEPINT0 = Field<32>(0x50000908),
	.DIEPINT1 = Field<32>(0x50000928),
	.DIEPINT2 = Field<32>(0x50000948),
	.DIEPINT3 = Field<32>(0x50000968),
	.DOEPINT0 = Field<32>(0x50000b08),
	.DOEPINT1 = Field<32>(0x50000b28),
	.DOEPINT2 = Field<32>(0x50000b48),
	.DOEPINT3 = Field<32>(0x50000b68),
	.DIEPTSIZ0 = Field<32>(0x50000910),
	.DOEPTSIZ0 = Field<32>(0x50000b10),
	.DIEPTSIZ1 = Field<32>(0x50000930),
	.DIEPTSIZ2 = Field<32>(0x50000950),
	.DIEPTSIZ3 = Field<32>(0x50000970),
	.DTXFSTS0 = Field<32>(0x50000918),
	.DTXFSTS1 = Field<32>(0x50000938),
	.DTXFSTS2 = Field<32>(0x50000958),
	.DTXFSTS3 = Field<32>(0x50000978),
	.DOEPTSIZ1 = Field<32>(0x50000b30),
	.DOEPTSIZ2 = Field<32>(0x50000b50),
	.DOEPTSIZ3 = Field<32>(0x50000b70),
};
stm32f4::regs::_otg_fs_global stm32f4::regs::otg_fs_global = {
	.FS_GOTGCTL = Field<32>(0x50000000),
	.FS_GOTGINT = Field<32>(0x50000004),
	.FS_GAHBCFG = Field<32>(0x50000008),
	.FS_GUSBCFG = Field<32>(0x5000000c),
	.FS_GRSTCTL = Field<32>(0x50000010),
	.FS_GINTSTS = Field<32>(0x50000014),
	.FS_GINTMSK = Field<32>(0x50000018),
	.FS_GRXSTSR_Device = Field<32>(0x5000001c),
	.FS_GRXSTSR_Host = Field<32>(0x5000001c),
	.FS_GRXFSIZ = Field<32>(0x50000024),
	.FS_GNPTXFSIZ_Device = Field<32>(0x50000028),
	.FS_GNPTXFSIZ_Host = Field<32>(0x50000028),
	.FS_GNPTXSTS = Field<32>(0x5000002c),
	.FS_GCCFG = Field<32>(0x50000038),
	.FS_CID = Field<32>(0x5000003c),
	.FS_HPTXFSIZ = Field<32>(0x50000100),
	.FS_DIEPTXF1 = Field<32>(0x50000104),
	.FS_DIEPTXF2 = Field<32>(0x50000108),
	.FS_DIEPTXF3 = Field<32>(0x5000010c),
};
stm32f4::regs::_otg_fs_host stm32f4::regs::otg_fs_host = {
	.FS_HCFG = Field<32>(0x50000400),
	.HFIR = Field<32>(0x50000404),
	.FS_HFNUM = Field<32>(0x50000408),
	.FS_HPTXSTS = Field<32>(0x50000410),
	.HAINT = Field<32>(0x50000414),
	.HAINTMSK = Field<32>(0x50000418),
	.FS_HPRT = Field<32>(0x50000440),
	.FS_HCCHAR0 = Field<32>(0x50000500),
	.FS_HCCHAR1 = Field<32>(0x50000520),
	.FS_HCCHAR2 = Field<32>(0x50000540),
	.FS_HCCHAR3 = Field<32>(0x50000560),
	.FS_HCCHAR4 = Field<32>(0x50000580),
	.FS_HCCHAR5 = Field<32>(0x500005a0),
	.FS_HCCHAR6 = Field<32>(0x500005c0),
	.FS_HCCHAR7 = Field<32>(0x500005e0),
	.FS_HCINT0 = Field<32>(0x50000508),
	.FS_HCINT1 = Field<32>(0x50000528),
	.FS_HCINT2 = Field<32>(0x50000548),
	.FS_HCINT3 = Field<32>(0x50000568),
	.FS_HCINT4 = Field<32>(0x50000588),
	.FS_HCINT5 = Field<32>(0x500005a8),
	.FS_HCINT6 = Field<32>(0x500005c8),
	.FS_HCINT7 = Field<32>(0x500005e8),
	.FS_HCINTMSK0 = Field<32>(0x5000050c),
	.FS_HCINTMSK1 = Field<32>(0x5000052c),
	.FS_HCINTMSK2 = Field<32>(0x5000054c),
	.FS_HCINTMSK3 = Field<32>(0x5000056c),
	.FS_HCINTMSK4 = Field<32>(0x5000058c),
	.FS_HCINTMSK5 = Field<32>(0x500005ac),
	.FS_HCINTMSK6 = Field<32>(0x500005cc),
	.FS_HCINTMSK7 = Field<32>(0x500005ec),
	.FS_HCTSIZ0 = Field<32>(0x50000510),
	.FS_HCTSIZ1 = Field<32>(0x50000530),
	.FS_HCTSIZ2 = Field<32>(0x50000550),
	.FS_HCTSIZ3 = Field<32>(0x50000570),
	.FS_HCTSIZ4 = Field<32>(0x50000590),
	.FS_HCTSIZ5 = Field<32>(0x500005b0),
	.FS_HCTSIZ6 = Field<32>(0x500005d0),
	.FS_HCTSIZ7 = Field<32>(0x500005f0),
};
stm32f4::regs::_otg_fs_pwrclk stm32f4::regs::otg_fs_pwrclk = {
	.FS_PCGCCTL = Field<32>(0x50000e00),
};
stm32f4::regs::_pwr stm32f4::regs::pwr = {
	.CR = Field<32>(0x40007000),
	.CSR = Field<32>(0x40007004),
};
stm32f4::regs::_rcc stm32f4::regs::rcc = {
	.CR = Field<32>(0x40023800),
	.PLLCFGR = Field<32>(0x40023804),
	.CFGR = Field<32>(0x40023808),
	.CIR = Field<32>(0x4002380c),
	.AHB1RSTR = Field<32>(0x40023810),
	.AHB2RSTR = Field<32>(0x40023814),
	.APB1RSTR = Field<32>(0x40023820),
	.APB2RSTR = Field<32>(0x40023824),
	.AHB1ENR = Field<32>(0x40023830),
	.AHB2ENR = Field<32>(0x40023834),
	.APB1ENR = Field<32>(0x40023840),
	.APB2ENR = Field<32>(0x40023844),
	.AHB1LPENR = Field<32>(0x40023850),
	.AHB2LPENR = Field<32>(0x40023854),
	.APB1LPENR = Field<32>(0x40023860),
	.APB2LPENR = Field<32>(0x40023864),
	.BDCR = Field<32>(0x40023870),
	.CSR = Field<32>(0x40023874),
	.SSCGR = Field<32>(0x40023880),
	.PLLI2SCFGR = Field<32>(0x40023884),
};
stm32f4::regs::_rtc stm32f4::regs::rtc = {
	.TR = Field<32>(0x40002800),
	.DR = Field<32>(0x40002804),
	.CR = Field<32>(0x40002808),
	.ISR = Field<32>(0x4000280c),
	.PRER = Field<32>(0x40002810),
	.WUTR = Field<32>(0x40002814),
	.CALIBR = Field<32>(0x40002818),
	.ALRMAR = Field<32>(0x4000281c),
	.ALRMBR = Field<32>(0x40002820),
	.WPR = Field<32>(0x40002824),
	.SSR = Field<32>(0x40002828),
	.SHIFTR = Field<32>(0x4000282c),
	.TSTR = Field<32>(0x40002830),
	.TSDR = Field<32>(0x40002834),
	.TSSSR = Field<32>(0x40002838),
	.CALR = Field<32>(0x4000283c),
	.TAFCR = Field<32>(0x40002840),
	.ALRMASSR = Field<32>(0x40002844),
	.ALRMBSSR = Field<32>(0x40002848),
	.BKP0R = Field<32>(0x40002850),
	.BKP1R = Field<32>(0x40002854),
	.BKP2R = Field<32>(0x40002858),
	.BKP3R = Field<32>(0x4000285c),
	.BKP4R = Field<32>(0x40002860),
	.BKP5R = Field<32>(0x40002864),
	.BKP6R = Field<32>(0x40002868),
	.BKP7R = Field<32>(0x4000286c),
	.BKP8R = Field<32>(0x40002870),
	.BKP9R = Field<32>(0x40002874),
	.BKP10R = Field<32>(0x40002878),
	.BKP11R = Field<32>(0x4000287c),
	.BKP12R = Field<32>(0x40002880),
	.BKP13R = Field<32>(0x40002884),
	.BKP14R = Field<32>(0x40002888),
	.BKP15R = Field<32>(0x4000288c),
	.BKP16R = Field<32>(0x40002890),
	.BKP17R = Field<32>(0x40002894),
	.BKP18R = Field<32>(0x40002898),
	.BKP19R = Field<32>(0x4000289c),
};
stm32f4::regs::_sdio stm32f4::regs::sdio = {
	.POWER = Field<32>(0x40012c00),
	.CLKCR = Field<32>(0x40012c04),
	.ARG = Field<32>(0x40012c08),
	.CMD = Field<32>(0x40012c0c),
	.RESPCMD = Field<32>(0x40012c10),
	.RESP1 = Field<32>(0x40012c14),
	.RESP2 = Field<32>(0x40012c18),
	.RESP3 = Field<32>(0x40012c1c),
	.RESP4 = Field<32>(0x40012c20),
	.DTIMER = Field<32>(0x40012c24),
	.DLEN = Field<32>(0x40012c28),
	.DCTRL = Field<32>(0x40012c2c),
	.DCOUNT = Field<32>(0x40012c30),
	.STA = Field<32>(0x40012c34),
	.ICR = Field<32>(0x40012c38),
	.MASK = Field<32>(0x40012c3c),
	.FIFOCNT = Field<32>(0x40012c48),
	.FIFO = Field<32>(0x40012c80),
};
stm32f4::regs::_syscfg stm32f4::regs::syscfg = {
	.MEMRM = Field<32>(0x40013800),
	.PMC = Field<32>(0x40013804),
	.EXTICR1 = Field<32>(0x40013808),
	.EXTICR2 = Field<32>(0x4001380c),
	.EXTICR3 = Field<32>(0x40013810),
	.EXTICR4 = Field<32>(0x40013814),
	.CMPCR = Field<32>(0x40013820),
};
stm32f4::regs::_tim1 stm32f4::regs::tim1 = {
	.CR1 = Field<32>(0x40010000),
	.CR2 = Field<32>(0x40010004),
	.SMCR = Field<32>(0x40010008),
	.DIER = Field<32>(0x4001000c),
	.SR = Field<32>(0x40010010),
	.EGR = Field<32>(0x40010014),
	.CCMR1_Output = Field<32>(0x40010018),
	.CCMR1_Input = Field<32>(0x40010018),
	.CCMR2_Output = Field<32>(0x4001001c),
	.CCMR2_Input = Field<32>(0x4001001c),
	.CCER = Field<32>(0x40010020),
	.CNT = Field<32>(0x40010024),
	.PSC = Field<32>(0x40010028),
	.ARR = Field<32>(0x4001002c),
	.CCR1 = Field<32>(0x40010034),
	.CCR2 = Field<32>(0x40010038),
	.CCR3 = Field<32>(0x4001003c),
	.CCR4 = Field<32>(0x40010040),
	.DCR = Field<32>(0x40010048),
	.DMAR = Field<32>(0x4001004c),
	.RCR = Field<32>(0x40010030),
	.BDTR = Field<32>(0x40010044),
};
stm32f4::regs::_tim8 stm32f4::regs::tim8 = {
	.CR1 = Field<32>(0x40010400),
	.CR2 = Field<32>(0x40010404),
	.SMCR = Field<32>(0x40010408),
	.DIER = Field<32>(0x4001040c),
	.SR = Field<32>(0x40010410),
	.EGR = Field<32>(0x40010414),
	.CCMR1_Output = Field<32>(0x40010418),
	.CCMR1_Input = Field<32>(0x40010418),
	.CCMR2_Output = Field<32>(0x4001041c),
	.CCMR2_Input = Field<32>(0x4001041c),
	.CCER = Field<32>(0x40010420),
	.CNT = Field<32>(0x40010424),
	.PSC = Field<32>(0x40010428),
	.ARR = Field<32>(0x4001042c),
	.CCR1 = Field<32>(0x40010434),
	.CCR2 = Field<32>(0x40010438),
	.CCR3 = Field<32>(0x4001043c),
	.CCR4 = Field<32>(0x40010440),
	.DCR = Field<32>(0x40010448),
	.DMAR = Field<32>(0x4001044c),
	.RCR = Field<32>(0x40010430),
	.BDTR = Field<32>(0x40010444),
};
stm32f4::regs::_tim10 stm32f4::regs::tim10 = {
	.CR1 = Field<32>(0x40014400),
	.DIER = Field<32>(0x4001440c),
	.SR = Field<32>(0x40014410),
	.EGR = Field<32>(0x40014414),
	.CCMR1_Output = Field<32>(0x40014418),
	.CCMR1_Input = Field<32>(0x40014418),
	.CCER = Field<32>(0x40014420),
	.CNT = Field<32>(0x40014424),
	.PSC = Field<32>(0x40014428),
	.ARR = Field<32>(0x4001442c),
	.CCR1 = Field<32>(0x40014434),
};
stm32f4::regs::_tim11 stm32f4::regs::tim11 = {
	.CR1 = Field<32>(0x40014800),
	.DIER = Field<32>(0x4001480c),
	.SR = Field<32>(0x40014810),
	.EGR = Field<32>(0x40014814),
	.CCMR1_Output = Field<32>(0x40014818),
	.CCMR1_Input = Field<32>(0x40014818),
	.CCER = Field<32>(0x40014820),
	.CNT = Field<32>(0x40014824),
	.PSC = Field<32>(0x40014828),
	.ARR = Field<32>(0x4001482c),
	.CCR1 = Field<32>(0x40014834),
	.OR = Field<32>(0x40014850),
};
stm32f4::regs::_tim2 stm32f4::regs::tim2 = {
	.CR1 = Field<32>(0x40000000),
	.CR2 = Field<32>(0x40000004),
	.SMCR = Field<32>(0x40000008),
	.DIER = Field<32>(0x4000000c),
	.SR = Field<32>(0x40000010),
	.EGR = Field<32>(0x40000014),
	.CCMR1_Output = Field<32>(0x40000018),
	.CCMR1_Input = Field<32>(0x40000018),
	.CCMR2_Output = Field<32>(0x4000001c),
	.CCMR2_Input = Field<32>(0x4000001c),
	.CCER = Field<32>(0x40000020),
	.CNT = Field<32>(0x40000024),
	.PSC = Field<32>(0x40000028),
	.ARR = Field<32>(0x4000002c),
	.CCR1 = Field<32>(0x40000034),
	.CCR2 = Field<32>(0x40000038),
	.CCR3 = Field<32>(0x4000003c),
	.CCR4 = Field<32>(0x40000040),
	.DCR = Field<32>(0x40000048),
	.DMAR = Field<32>(0x4000004c),
	.OR = Field<32>(0x40000050),
};
stm32f4::regs::_tim3 stm32f4::regs::tim3 = {
	.CR1 = Field<32>(0x40000400),
	.CR2 = Field<32>(0x40000404),
	.SMCR = Field<32>(0x40000408),
	.DIER = Field<32>(0x4000040c),
	.SR = Field<32>(0x40000410),
	.EGR = Field<32>(0x40000414),
	.CCMR1_Output = Field<32>(0x40000418),
	.CCMR1_Input = Field<32>(0x40000418),
	.CCMR2_Output = Field<32>(0x4000041c),
	.CCMR2_Input = Field<32>(0x4000041c),
	.CCER = Field<32>(0x40000420),
	.CNT = Field<32>(0x40000424),
	.PSC = Field<32>(0x40000428),
	.ARR = Field<32>(0x4000042c),
	.CCR1 = Field<32>(0x40000434),
	.CCR2 = Field<32>(0x40000438),
	.CCR3 = Field<32>(0x4000043c),
	.CCR4 = Field<32>(0x40000440),
	.DCR = Field<32>(0x40000448),
	.DMAR = Field<32>(0x4000044c),
};
stm32f4::regs::_tim4 stm32f4::regs::tim4 = {
	.CR1 = Field<32>(0x40000800),
	.CR2 = Field<32>(0x40000804),
	.SMCR = Field<32>(0x40000808),
	.DIER = Field<32>(0x4000080c),
	.SR = Field<32>(0x40000810),
	.EGR = Field<32>(0x40000814),
	.CCMR1_Output = Field<32>(0x40000818),
	.CCMR1_Input = Field<32>(0x40000818),
	.CCMR2_Output = Field<32>(0x4000081c),
	.CCMR2_Input = Field<32>(0x4000081c),
	.CCER = Field<32>(0x40000820),
	.CNT = Field<32>(0x40000824),
	.PSC = Field<32>(0x40000828),
	.ARR = Field<32>(0x4000082c),
	.CCR1 = Field<32>(0x40000834),
	.CCR2 = Field<32>(0x40000838),
	.CCR3 = Field<32>(0x4000083c),
	.CCR4 = Field<32>(0x40000840),
	.DCR = Field<32>(0x40000848),
	.DMAR = Field<32>(0x4000084c),
};
stm32f4::regs::_tim5 stm32f4::regs::tim5 = {
	.CR1 = Field<32>(0x40000c00),
	.CR2 = Field<32>(0x40000c04),
	.SMCR = Field<32>(0x40000c08),
	.DIER = Field<32>(0x40000c0c),
	.SR = Field<32>(0x40000c10),
	.EGR = Field<32>(0x40000c14),
	.CCMR1_Output = Field<32>(0x40000c18),
	.CCMR1_Input = Field<32>(0x40000c18),
	.CCMR2_Output = Field<32>(0x40000c1c),
	.CCMR2_Input = Field<32>(0x40000c1c),
	.CCER = Field<32>(0x40000c20),
	.CNT = Field<32>(0x40000c24),
	.PSC = Field<32>(0x40000c28),
	.ARR = Field<32>(0x40000c2c),
	.CCR1 = Field<32>(0x40000c34),
	.CCR2 = Field<32>(0x40000c38),
	.CCR3 = Field<32>(0x40000c3c),
	.CCR4 = Field<32>(0x40000c40),
	.DCR = Field<32>(0x40000c48),
	.DMAR = Field<32>(0x40000c4c),
	.OR = Field<32>(0x40000c50),
};
stm32f4::regs::_tim9 stm32f4::regs::tim9 = {
	.CR1 = Field<32>(0x40014000),
	.CR2 = Field<32>(0x40014004),
	.SMCR = Field<32>(0x40014008),
	.DIER = Field<32>(0x4001400c),
	.SR = Field<32>(0x40014010),
	.EGR = Field<32>(0x40014014),
	.CCMR1_Output = Field<32>(0x40014018),
	.CCMR1_Input = Field<32>(0x40014018),
	.CCER = Field<32>(0x40014020),
	.CNT = Field<32>(0x40014024),
	.PSC = Field<32>(0x40014028),
	.ARR = Field<32>(0x4001402c),
	.CCR1 = Field<32>(0x40014034),
	.CCR2 = Field<32>(0x40014038),
};
stm32f4::regs::_usart stm32f4::regs::usart1 = {
	.SR = Field<32>(0x40011000),
	.DR = Field<32>(0x40011004),
	.BRR = Field<32>(0x40011008),
	.CR1 = Field<32>(0x4001100c),
	.CR2 = Field<32>(0x40011010),
	.CR3 = Field<32>(0x40011014),
	.GTPR = Field<32>(0x40011018),
};
stm32f4::regs::_usart stm32f4::regs::usart2 = {
	.SR = Field<32>(0x40004400),
	.DR = Field<32>(0x40004404),
	.BRR = Field<32>(0x40004408),
	.CR1 = Field<32>(0x4000440c),
	.CR2 = Field<32>(0x40004410),
	.CR3 = Field<32>(0x40004414),
	.GTPR = Field<32>(0x40004418),
};
stm32f4::regs::_usart stm32f4::regs::usart6 = {
	.SR = Field<32>(0x40011400),
	.DR = Field<32>(0x40011404),
	.BRR = Field<32>(0x40011408),
	.CR1 = Field<32>(0x4001140c),
	.CR2 = Field<32>(0x40011410),
	.CR3 = Field<32>(0x40011414),
	.GTPR = Field<32>(0x40011418),
};
stm32f4::regs::_wwdg stm32f4::regs::wwdg = {
	.CR = Field<32>(0x40002c00),
	.CFR = Field<32>(0x40002c04),
	.SR = Field<32>(0x40002c08),
};
stm32f4::regs::_dma stm32f4::regs::dma2 = {
	.LISR = Field<32>(0x40026400),
	.HISR = Field<32>(0x40026404),
	.LIFCR = Field<32>(0x40026408),
	.HIFCR = Field<32>(0x4002640c),
	.S0CR = Field<32>(0x40026410),
	.S0NDTR = Field<32>(0x40026414),
	.S0PAR = Field<32>(0x40026418),
	.S0M0AR = Field<32>(0x4002641c),
	.S0M1AR = Field<32>(0x40026420),
	.S0FCR = Field<32>(0x40026424),
	.S1CR = Field<32>(0x40026428),
	.S1NDTR = Field<32>(0x4002642c),
	.S1PAR = Field<32>(0x40026430),
	.S1M0AR = Field<32>(0x40026434),
	.S1M1AR = Field<32>(0x40026438),
	.S1FCR = Field<32>(0x4002643c),
	.S2CR = Field<32>(0x40026440),
	.S2NDTR = Field<32>(0x40026444),
	.S2PAR = Field<32>(0x40026448),
	.S2M0AR = Field<32>(0x4002644c),
	.S2M1AR = Field<32>(0x40026450),
	.S2FCR = Field<32>(0x40026454),
	.S3CR = Field<32>(0x40026458),
	.S3NDTR = Field<32>(0x4002645c),
	.S3PAR = Field<32>(0x40026460),
	.S3M0AR = Field<32>(0x40026464),
	.S3M1AR = Field<32>(0x40026468),
	.S3FCR = Field<32>(0x4002646c),
	.S4CR = Field<32>(0x40026470),
	.S4NDTR = Field<32>(0x40026474),
	.S4PAR = Field<32>(0x40026478),
	.S4M0AR = Field<32>(0x4002647c),
	.S4M1AR = Field<32>(0x40026480),
	.S4FCR = Field<32>(0x40026484),
	.S5CR = Field<32>(0x40026488),
	.S5NDTR = Field<32>(0x4002648c),
	.S5PAR = Field<32>(0x40026490),
	.S5M0AR = Field<32>(0x40026494),
	.S5M1AR = Field<32>(0x40026498),
	.S5FCR = Field<32>(0x4002649c),
	.S6CR = Field<32>(0x400264a0),
	.S6NDTR = Field<32>(0x400264a4),
	.S6PAR = Field<32>(0x400264a8),
	.S6M0AR = Field<32>(0x400264ac),
	.S6M1AR = Field<32>(0x400264b0),
	.S6FCR = Field<32>(0x400264b4),
	.S7CR = Field<32>(0x400264b8),
	.S7NDTR = Field<32>(0x400264bc),
	.S7PAR = Field<32>(0x400264c0),
	.S7M0AR = Field<32>(0x400264c4),
	.S7M1AR = Field<32>(0x400264c8),
	.S7FCR = Field<32>(0x400264cc),
};
stm32f4::regs::_dma stm32f4::regs::dma1 = {
	.LISR = Field<32>(0x40026000),
	.HISR = Field<32>(0x40026004),
	.LIFCR = Field<32>(0x40026008),
	.HIFCR = Field<32>(0x4002600c),
	.S0CR = Field<32>(0x40026010),
	.S0NDTR = Field<32>(0x40026014),
	.S0PAR = Field<32>(0x40026018),
	.S0M0AR = Field<32>(0x4002601c),
	.S0M1AR = Field<32>(0x40026020),
	.S0FCR = Field<32>(0x40026024),
	.S1CR = Field<32>(0x40026028),
	.S1NDTR = Field<32>(0x4002602c),
	.S1PAR = Field<32>(0x40026030),
	.S1M0AR = Field<32>(0x40026034),
	.S1M1AR = Field<32>(0x40026038),
	.S1FCR = Field<32>(0x4002603c),
	.S2CR = Field<32>(0x40026040),
	.S2NDTR = Field<32>(0x40026044),
	.S2PAR = Field<32>(0x40026048),
	.S2M0AR = Field<32>(0x4002604c),
	.S2M1AR = Field<32>(0x40026050),
	.S2FCR = Field<32>(0x40026054),
	.S3CR = Field<32>(0x40026058),
	.S3NDTR = Field<32>(0x4002605c),
	.S3PAR = Field<32>(0x40026060),
	.S3M0AR = Field<32>(0x40026064),
	.S3M1AR = Field<32>(0x40026068),
	.S3FCR = Field<32>(0x4002606c),
	.S4CR = Field<32>(0x40026070),
	.S4NDTR = Field<32>(0x40026074),
	.S4PAR = Field<32>(0x40026078),
	.S4M0AR = Field<32>(0x4002607c),
	.S4M1AR = Field<32>(0x40026080),
	.S4FCR = Field<32>(0x40026084),
	.S5CR = Field<32>(0x40026088),
	.S5NDTR = Field<32>(0x4002608c),
	.S5PAR = Field<32>(0x40026090),
	.S5M0AR = Field<32>(0x40026094),
	.S5M1AR = Field<32>(0x40026098),
	.S5FCR = Field<32>(0x4002609c),
	.S6CR = Field<32>(0x400260a0),
	.S6NDTR = Field<32>(0x400260a4),
	.S6PAR = Field<32>(0x400260a8),
	.S6M0AR = Field<32>(0x400260ac),
	.S6M1AR = Field<32>(0x400260b0),
	.S6FCR = Field<32>(0x400260b4),
	.S7CR = Field<32>(0x400260b8),
	.S7NDTR = Field<32>(0x400260bc),
	.S7PAR = Field<32>(0x400260c0),
	.S7M0AR = Field<32>(0x400260c4),
	.S7M1AR = Field<32>(0x400260c8),
	.S7FCR = Field<32>(0x400260cc),
};
stm32f4::regs::_gpio stm32f4::regs::gpioh = {
	.MODER = Field<32>(0x40021c00),
	.OTYPER = Field<32>(0x40021c04),
	.OSPEEDR = Field<32>(0x40021c08),
	.PUPDR = Field<32>(0x40021c0c),
	.IDR = Field<32>(0x40021c10),
	.ODR = Field<32>(0x40021c14),
	.BSRR = Field<32>(0x40021c18),
	.LCKR = Field<32>(0x40021c1c),
	.AFRL = Field<32>(0x40021c20),
	.AFRH = Field<32>(0x40021c24),
};
stm32f4::regs::_gpio stm32f4::regs::gpioe = {
	.MODER = Field<32>(0x40021000),
	.OTYPER = Field<32>(0x40021004),
	.OSPEEDR = Field<32>(0x40021008),
	.PUPDR = Field<32>(0x4002100c),
	.IDR = Field<32>(0x40021010),
	.ODR = Field<32>(0x40021014),
	.BSRR = Field<32>(0x40021018),
	.LCKR = Field<32>(0x4002101c),
	.AFRL = Field<32>(0x40021020),
	.AFRH = Field<32>(0x40021024),
};
stm32f4::regs::_gpio stm32f4::regs::gpiod = {
	.MODER = Field<32>(0x40020c00),
	.OTYPER = Field<32>(0x40020c04),
	.OSPEEDR = Field<32>(0x40020c08),
	.PUPDR = Field<32>(0x40020c0c),
	.IDR = Field<32>(0x40020c10),
	.ODR = Field<32>(0x40020c14),
	.BSRR = Field<32>(0x40020c18),
	.LCKR = Field<32>(0x40020c1c),
	.AFRL = Field<32>(0x40020c20),
	.AFRH = Field<32>(0x40020c24),
};
stm32f4::regs::_gpio stm32f4::regs::gpioc = {
	.MODER = Field<32>(0x40020800),
	.OTYPER = Field<32>(0x40020804),
	.OSPEEDR = Field<32>(0x40020808),
	.PUPDR = Field<32>(0x4002080c),
	.IDR = Field<32>(0x40020810),
	.ODR = Field<32>(0x40020814),
	.BSRR = Field<32>(0x40020818),
	.LCKR = Field<32>(0x4002081c),
	.AFRL = Field<32>(0x40020820),
	.AFRH = Field<32>(0x40020824),
};
stm32f4::regs::_gpio stm32f4::regs::gpiob = {
	.MODER = Field<32>(0x40020400),
	.OTYPER = Field<32>(0x40020404),
	.OSPEEDR = Field<32>(0x40020408),
	.PUPDR = Field<32>(0x4002040c),
	.IDR = Field<32>(0x40020410),
	.ODR = Field<32>(0x40020414),
	.BSRR = Field<32>(0x40020418),
	.LCKR = Field<32>(0x4002041c),
	.AFRL = Field<32>(0x40020420),
	.AFRH = Field<32>(0x40020424),
};
stm32f4::regs::_gpio stm32f4::regs::gpioa = {
	.MODER = Field<32>(0x40020000),
	.OTYPER = Field<32>(0x40020004),
	.OSPEEDR = Field<32>(0x40020008),
	.PUPDR = Field<32>(0x4002000c),
	.IDR = Field<32>(0x40020010),
	.ODR = Field<32>(0x40020014),
	.BSRR = Field<32>(0x40020018),
	.LCKR = Field<32>(0x4002001c),
	.AFRL = Field<32>(0x40020020),
	.AFRH = Field<32>(0x40020024),
};
stm32f4::regs::_i2c stm32f4::regs::i2c3 = {
	.CR1 = Field<32>(0x40005c00),
	.CR2 = Field<32>(0x40005c04),
	.OAR1 = Field<32>(0x40005c08),
	.OAR2 = Field<32>(0x40005c0c),
	.DR = Field<32>(0x40005c10),
	.SR1 = Field<32>(0x40005c14),
	.SR2 = Field<32>(0x40005c18),
	.CCR = Field<32>(0x40005c1c),
	.TRISE = Field<32>(0x40005c20),
};
stm32f4::regs::_i2c stm32f4::regs::i2c2 = {
	.CR1 = Field<32>(0x40005800),
	.CR2 = Field<32>(0x40005804),
	.OAR1 = Field<32>(0x40005808),
	.OAR2 = Field<32>(0x4000580c),
	.DR = Field<32>(0x40005810),
	.SR1 = Field<32>(0x40005814),
	.SR2 = Field<32>(0x40005818),
	.CCR = Field<32>(0x4000581c),
	.TRISE = Field<32>(0x40005820),
};
stm32f4::regs::_i2c stm32f4::regs::i2c1 = {
	.CR1 = Field<32>(0x40005400),
	.CR2 = Field<32>(0x40005404),
	.OAR1 = Field<32>(0x40005408),
	.OAR2 = Field<32>(0x4000540c),
	.DR = Field<32>(0x40005410),
	.SR1 = Field<32>(0x40005414),
	.SR2 = Field<32>(0x40005418),
	.CCR = Field<32>(0x4000541c),
	.TRISE = Field<32>(0x40005420),
};
stm32f4::regs::_i2s2ext stm32f4::regs::i2s2ext = {
	.CR1 = Field<32>(0x40003400),
	.CR2 = Field<32>(0x40003404),
	.SR = Field<32>(0x40003408),
	.DR = Field<32>(0x4000340c),
	.CRCPR = Field<32>(0x40003410),
	.RXCRCR = Field<32>(0x40003414),
	.TXCRCR = Field<32>(0x40003418),
	.I2SCFGR = Field<32>(0x4000341c),
	.I2SPR = Field<32>(0x40003420),
};
stm32f4::regs::_i2s3ext stm32f4::regs::i2s3ext = {
	.CR1 = Field<32>(0x40004000),
	.CR2 = Field<32>(0x40004004),
	.SR = Field<32>(0x40004008),
	.DR = Field<32>(0x4000400c),
	.CRCPR = Field<32>(0x40004010),
	.RXCRCR = Field<32>(0x40004014),
	.TXCRCR = Field<32>(0x40004018),
	.I2SCFGR = Field<32>(0x4000401c),
	.I2SPR = Field<32>(0x40004020),
};
stm32f4::regs::_spi stm32f4::regs::spi1 = {
	.CR1 = Field<32>(0x40013000),
	.CR2 = Field<32>(0x40013004),
	.SR = Field<32>(0x40013008),
	.DR = Field<32>(0x4001300c),
	.CRCPR = Field<32>(0x40013010),
	.RXCRCR = Field<32>(0x40013014),
	.TXCRCR = Field<32>(0x40013018),
	.I2SCFGR = Field<32>(0x4001301c),
	.I2SPR = Field<32>(0x40013020),
};
stm32f4::regs::_spi stm32f4::regs::spi2 = {
	.CR1 = Field<32>(0x40003800),
	.CR2 = Field<32>(0x40003804),
	.SR = Field<32>(0x40003808),
	.DR = Field<32>(0x4000380c),
	.CRCPR = Field<32>(0x40003810),
	.RXCRCR = Field<32>(0x40003814),
	.TXCRCR = Field<32>(0x40003818),
	.I2SCFGR = Field<32>(0x4000381c),
	.I2SPR = Field<32>(0x40003820),
};
stm32f4::regs::_spi stm32f4::regs::spi3 = {
	.CR1 = Field<32>(0x40003c00),
	.CR2 = Field<32>(0x40003c04),
	.SR = Field<32>(0x40003c08),
	.DR = Field<32>(0x40003c0c),
	.CRCPR = Field<32>(0x40003c10),
	.RXCRCR = Field<32>(0x40003c14),
	.TXCRCR = Field<32>(0x40003c18),
	.I2SCFGR = Field<32>(0x40003c1c),
	.I2SPR = Field<32>(0x40003c20),
};
stm32f4::regs::_spi stm32f4::regs::spi4 = {
	.CR1 = Field<32>(0x40013400),
	.CR2 = Field<32>(0x40013404),
	.SR = Field<32>(0x40013408),
	.DR = Field<32>(0x4001340c),
	.CRCPR = Field<32>(0x40013410),
	.RXCRCR = Field<32>(0x40013414),
	.TXCRCR = Field<32>(0x40013418),
	.I2SCFGR = Field<32>(0x4001341c),
	.I2SPR = Field<32>(0x40013420),
};
stm32f4::regs::_spi stm32f4::regs::spi5 = {
	.CR1 = Field<32>(0x40015000),
	.CR2 = Field<32>(0x40015004),
	.SR = Field<32>(0x40015008),
	.DR = Field<32>(0x4001500c),
	.CRCPR = Field<32>(0x40015010),
	.RXCRCR = Field<32>(0x40015014),
	.TXCRCR = Field<32>(0x40015018),
	.I2SCFGR = Field<32>(0x4001501c),
	.I2SPR = Field<32>(0x40015020),
};
stm32f4::regs::_nvic stm32f4::regs::nvic = {
	.ICTR = Field<32>(0xe000e004),
	.STIR = Field<32>(0xe000ef00),
	.ISER0 = Field<32>(0xe000e100),
	.ISER1 = Field<32>(0xe000e104),
	.ISER2 = Field<32>(0xe000e108),
	.ICER0 = Field<32>(0xe000e180),
	.ICER1 = Field<32>(0xe000e184),
	.ICER2 = Field<32>(0xe000e188),
	.ISPR0 = Field<32>(0xe000e200),
	.ISPR1 = Field<32>(0xe000e204),
	.ISPR2 = Field<32>(0xe000e208),
	.ICPR0 = Field<32>(0xe000e280),
	.ICPR1 = Field<32>(0xe000e284),
	.ICPR2 = Field<32>(0xe000e288),
	.IABR0 = Field<32>(0xe000e300),
	.IABR1 = Field<32>(0xe000e304),
	.IABR2 = Field<32>(0xe000e308),
	.IPR0 = Field<32>(0xe000e400),
	.IPR1 = Field<32>(0xe000e404),
	.IPR2 = Field<32>(0xe000e408),
	.IPR3 = Field<32>(0xe000e40c),
	.IPR4 = Field<32>(0xe000e410),
	.IPR5 = Field<32>(0xe000e414),
	.IPR6 = Field<32>(0xe000e418),
	.IPR7 = Field<32>(0xe000e41c),
	.IPR8 = Field<32>(0xe000e420),
	.IPR9 = Field<32>(0xe000e424),
	.IPR10 = Field<32>(0xe000e428),
	.IPR11 = Field<32>(0xe000e42c),
	.IPR12 = Field<32>(0xe000e430),
	.IPR13 = Field<32>(0xe000e434),
	.IPR14 = Field<32>(0xe000e438),
	.IPR15 = Field<32>(0xe000e43c),
	.IPR16 = Field<32>(0xe000e440),
	.IPR17 = Field<32>(0xe000e444),
	.IPR18 = Field<32>(0xe000e448),
	.IPR19 = Field<32>(0xe000e44c),
};
