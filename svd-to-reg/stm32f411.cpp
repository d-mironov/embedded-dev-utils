#include "register.h"
#include "stm32f411.h"

/*
 * ADC_Common
 */
Field<32> stm32f4::regs::adc_common::CSR(0x40012300);
Field<32> stm32f4::regs::adc_common::CCR(0x40012304);
/*
 * ADC1
 */
Field<32> stm32f4::regs::adc1::SR(0x40012000);
Field<32> stm32f4::regs::adc1::CR1(0x40012004);
Field<32> stm32f4::regs::adc1::CR2(0x40012008);
Field<32> stm32f4::regs::adc1::SMPR1(0x4001200c);
Field<32> stm32f4::regs::adc1::SMPR2(0x40012010);
Field<32> stm32f4::regs::adc1::JOFR1(0x40012014);
Field<32> stm32f4::regs::adc1::JOFR2(0x40012018);
Field<32> stm32f4::regs::adc1::JOFR3(0x4001201c);
Field<32> stm32f4::regs::adc1::JOFR4(0x40012020);
Field<32> stm32f4::regs::adc1::HTR(0x40012024);
Field<32> stm32f4::regs::adc1::LTR(0x40012028);
Field<32> stm32f4::regs::adc1::SQR1(0x4001202c);
Field<32> stm32f4::regs::adc1::SQR2(0x40012030);
Field<32> stm32f4::regs::adc1::SQR3(0x40012034);
Field<32> stm32f4::regs::adc1::JSQR(0x40012038);
Field<32> stm32f4::regs::adc1::JDR1(0x4001203c);
Field<32> stm32f4::regs::adc1::JDR2(0x40012040);
Field<32> stm32f4::regs::adc1::JDR3(0x40012044);
Field<32> stm32f4::regs::adc1::JDR4(0x40012048);
Field<32> stm32f4::regs::adc1::DR(0x4001204c);
/*
 * CRC
 */
Field<32> stm32f4::regs::crc::DR(0x40023000);
Field<32> stm32f4::regs::crc::IDR(0x40023004);
Field<32> stm32f4::regs::crc::CR(0x40023008);
/*
 * DBG
 */
Field<32> stm32f4::regs::dbg::DBGMCU_IDCODE(0xe0042000);
Field<32> stm32f4::regs::dbg::DBGMCU_CR(0xe0042004);
Field<32> stm32f4::regs::dbg::DBGMCU_APB1_FZ(0xe0042008);
Field<32> stm32f4::regs::dbg::DBGMCU_APB2_FZ(0xe004200c);
/*
 * EXTI
 */
Field<32> stm32f4::regs::exti::IMR(0x40013c00);
Field<32> stm32f4::regs::exti::EMR(0x40013c04);
Field<32> stm32f4::regs::exti::RTSR(0x40013c08);
Field<32> stm32f4::regs::exti::FTSR(0x40013c0c);
Field<32> stm32f4::regs::exti::SWIER(0x40013c10);
Field<32> stm32f4::regs::exti::PR(0x40013c14);
/*
 * FLASH
 */
Field<32> stm32f4::regs::flash::ACR(0x40023c00);
Field<32> stm32f4::regs::flash::KEYR(0x40023c04);
Field<32> stm32f4::regs::flash::OPTKEYR(0x40023c08);
Field<32> stm32f4::regs::flash::SR(0x40023c0c);
Field<32> stm32f4::regs::flash::CR(0x40023c10);
Field<32> stm32f4::regs::flash::OPTCR(0x40023c14);
/*
 * IWDG
 */
Field<32> stm32f4::regs::iwdg::KR(0x40003000);
Field<32> stm32f4::regs::iwdg::PR(0x40003004);
Field<32> stm32f4::regs::iwdg::RLR(0x40003008);
Field<32> stm32f4::regs::iwdg::SR(0x4000300c);
/*
 * OTG_FS_DEVICE
 */
Field<32> stm32f4::regs::otg_fs_device::FS_DCFG(0x50000800);
Field<32> stm32f4::regs::otg_fs_device::FS_DCTL(0x50000804);
Field<32> stm32f4::regs::otg_fs_device::FS_DSTS(0x50000808);
Field<32> stm32f4::regs::otg_fs_device::FS_DIEPMSK(0x50000810);
Field<32> stm32f4::regs::otg_fs_device::FS_DOEPMSK(0x50000814);
Field<32> stm32f4::regs::otg_fs_device::FS_DAINT(0x50000818);
Field<32> stm32f4::regs::otg_fs_device::FS_DAINTMSK(0x5000081c);
Field<32> stm32f4::regs::otg_fs_device::DVBUSDIS(0x50000828);
Field<32> stm32f4::regs::otg_fs_device::DVBUSPULSE(0x5000082c);
Field<32> stm32f4::regs::otg_fs_device::DIEPEMPMSK(0x50000834);
Field<32> stm32f4::regs::otg_fs_device::FS_DIEPCTL0(0x50000900);
Field<32> stm32f4::regs::otg_fs_device::DIEPCTL1(0x50000920);
Field<32> stm32f4::regs::otg_fs_device::DIEPCTL2(0x50000940);
Field<32> stm32f4::regs::otg_fs_device::DIEPCTL3(0x50000960);
Field<32> stm32f4::regs::otg_fs_device::DOEPCTL0(0x50000b00);
Field<32> stm32f4::regs::otg_fs_device::DOEPCTL1(0x50000b20);
Field<32> stm32f4::regs::otg_fs_device::DOEPCTL2(0x50000b40);
Field<32> stm32f4::regs::otg_fs_device::DOEPCTL3(0x50000b60);
Field<32> stm32f4::regs::otg_fs_device::DIEPINT0(0x50000908);
Field<32> stm32f4::regs::otg_fs_device::DIEPINT1(0x50000928);
Field<32> stm32f4::regs::otg_fs_device::DIEPINT2(0x50000948);
Field<32> stm32f4::regs::otg_fs_device::DIEPINT3(0x50000968);
Field<32> stm32f4::regs::otg_fs_device::DOEPINT0(0x50000b08);
Field<32> stm32f4::regs::otg_fs_device::DOEPINT1(0x50000b28);
Field<32> stm32f4::regs::otg_fs_device::DOEPINT2(0x50000b48);
Field<32> stm32f4::regs::otg_fs_device::DOEPINT3(0x50000b68);
Field<32> stm32f4::regs::otg_fs_device::DIEPTSIZ0(0x50000910);
Field<32> stm32f4::regs::otg_fs_device::DOEPTSIZ0(0x50000b10);
Field<32> stm32f4::regs::otg_fs_device::DIEPTSIZ1(0x50000930);
Field<32> stm32f4::regs::otg_fs_device::DIEPTSIZ2(0x50000950);
Field<32> stm32f4::regs::otg_fs_device::DIEPTSIZ3(0x50000970);
Field<32> stm32f4::regs::otg_fs_device::DTXFSTS0(0x50000918);
Field<32> stm32f4::regs::otg_fs_device::DTXFSTS1(0x50000938);
Field<32> stm32f4::regs::otg_fs_device::DTXFSTS2(0x50000958);
Field<32> stm32f4::regs::otg_fs_device::DTXFSTS3(0x50000978);
Field<32> stm32f4::regs::otg_fs_device::DOEPTSIZ1(0x50000b30);
Field<32> stm32f4::regs::otg_fs_device::DOEPTSIZ2(0x50000b50);
Field<32> stm32f4::regs::otg_fs_device::DOEPTSIZ3(0x50000b70);
/*
 * OTG_FS_GLOBAL
 */
Field<32> stm32f4::regs::otg_fs_global::FS_GOTGCTL(0x50000000);
Field<32> stm32f4::regs::otg_fs_global::FS_GOTGINT(0x50000004);
Field<32> stm32f4::regs::otg_fs_global::FS_GAHBCFG(0x50000008);
Field<32> stm32f4::regs::otg_fs_global::FS_GUSBCFG(0x5000000c);
Field<32> stm32f4::regs::otg_fs_global::FS_GRSTCTL(0x50000010);
Field<32> stm32f4::regs::otg_fs_global::FS_GINTSTS(0x50000014);
Field<32> stm32f4::regs::otg_fs_global::FS_GINTMSK(0x50000018);
Field<32> stm32f4::regs::otg_fs_global::FS_GRXSTSR_Device(0x5000001c);
Field<32> stm32f4::regs::otg_fs_global::FS_GRXSTSR_Host(0x5000001c);
Field<32> stm32f4::regs::otg_fs_global::FS_GRXFSIZ(0x50000024);
Field<32> stm32f4::regs::otg_fs_global::FS_GNPTXFSIZ_Device(0x50000028);
Field<32> stm32f4::regs::otg_fs_global::FS_GNPTXFSIZ_Host(0x50000028);
Field<32> stm32f4::regs::otg_fs_global::FS_GNPTXSTS(0x5000002c);
Field<32> stm32f4::regs::otg_fs_global::FS_GCCFG(0x50000038);
Field<32> stm32f4::regs::otg_fs_global::FS_CID(0x5000003c);
Field<32> stm32f4::regs::otg_fs_global::FS_HPTXFSIZ(0x50000100);
Field<32> stm32f4::regs::otg_fs_global::FS_DIEPTXF1(0x50000104);
Field<32> stm32f4::regs::otg_fs_global::FS_DIEPTXF2(0x50000108);
Field<32> stm32f4::regs::otg_fs_global::FS_DIEPTXF3(0x5000010c);
/*
 * OTG_FS_HOST
 */
Field<32> stm32f4::regs::otg_fs_host::FS_HCFG(0x50000400);
Field<32> stm32f4::regs::otg_fs_host::HFIR(0x50000404);
Field<32> stm32f4::regs::otg_fs_host::FS_HFNUM(0x50000408);
Field<32> stm32f4::regs::otg_fs_host::FS_HPTXSTS(0x50000410);
Field<32> stm32f4::regs::otg_fs_host::HAINT(0x50000414);
Field<32> stm32f4::regs::otg_fs_host::HAINTMSK(0x50000418);
Field<32> stm32f4::regs::otg_fs_host::FS_HPRT(0x50000440);
Field<32> stm32f4::regs::otg_fs_host::FS_HCCHAR0(0x50000500);
Field<32> stm32f4::regs::otg_fs_host::FS_HCCHAR1(0x50000520);
Field<32> stm32f4::regs::otg_fs_host::FS_HCCHAR2(0x50000540);
Field<32> stm32f4::regs::otg_fs_host::FS_HCCHAR3(0x50000560);
Field<32> stm32f4::regs::otg_fs_host::FS_HCCHAR4(0x50000580);
Field<32> stm32f4::regs::otg_fs_host::FS_HCCHAR5(0x500005a0);
Field<32> stm32f4::regs::otg_fs_host::FS_HCCHAR6(0x500005c0);
Field<32> stm32f4::regs::otg_fs_host::FS_HCCHAR7(0x500005e0);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINT0(0x50000508);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINT1(0x50000528);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINT2(0x50000548);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINT3(0x50000568);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINT4(0x50000588);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINT5(0x500005a8);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINT6(0x500005c8);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINT7(0x500005e8);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINTMSK0(0x5000050c);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINTMSK1(0x5000052c);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINTMSK2(0x5000054c);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINTMSK3(0x5000056c);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINTMSK4(0x5000058c);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINTMSK5(0x500005ac);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINTMSK6(0x500005cc);
Field<32> stm32f4::regs::otg_fs_host::FS_HCINTMSK7(0x500005ec);
Field<32> stm32f4::regs::otg_fs_host::FS_HCTSIZ0(0x50000510);
Field<32> stm32f4::regs::otg_fs_host::FS_HCTSIZ1(0x50000530);
Field<32> stm32f4::regs::otg_fs_host::FS_HCTSIZ2(0x50000550);
Field<32> stm32f4::regs::otg_fs_host::FS_HCTSIZ3(0x50000570);
Field<32> stm32f4::regs::otg_fs_host::FS_HCTSIZ4(0x50000590);
Field<32> stm32f4::regs::otg_fs_host::FS_HCTSIZ5(0x500005b0);
Field<32> stm32f4::regs::otg_fs_host::FS_HCTSIZ6(0x500005d0);
Field<32> stm32f4::regs::otg_fs_host::FS_HCTSIZ7(0x500005f0);
/*
 * OTG_FS_PWRCLK
 */
Field<32> stm32f4::regs::otg_fs_pwrclk::FS_PCGCCTL(0x50000e00);
/*
 * PWR
 */
Field<32> stm32f4::regs::pwr::CR(0x40007000);
Field<32> stm32f4::regs::pwr::CSR(0x40007004);
/*
 * RCC
 */
Field<32> stm32f4::regs::rcc::CR(0x40023800);
Field<32> stm32f4::regs::rcc::PLLCFGR(0x40023804);
Field<32> stm32f4::regs::rcc::CFGR(0x40023808);
Field<32> stm32f4::regs::rcc::CIR(0x4002380c);
Field<32> stm32f4::regs::rcc::AHB1RSTR(0x40023810);
Field<32> stm32f4::regs::rcc::AHB2RSTR(0x40023814);
Field<32> stm32f4::regs::rcc::APB1RSTR(0x40023820);
Field<32> stm32f4::regs::rcc::APB2RSTR(0x40023824);
Field<32> stm32f4::regs::rcc::AHB1ENR(0x40023830);
Field<32> stm32f4::regs::rcc::AHB2ENR(0x40023834);
Field<32> stm32f4::regs::rcc::APB1ENR(0x40023840);
Field<32> stm32f4::regs::rcc::APB2ENR(0x40023844);
Field<32> stm32f4::regs::rcc::AHB1LPENR(0x40023850);
Field<32> stm32f4::regs::rcc::AHB2LPENR(0x40023854);
Field<32> stm32f4::regs::rcc::APB1LPENR(0x40023860);
Field<32> stm32f4::regs::rcc::APB2LPENR(0x40023864);
Field<32> stm32f4::regs::rcc::BDCR(0x40023870);
Field<32> stm32f4::regs::rcc::CSR(0x40023874);
Field<32> stm32f4::regs::rcc::SSCGR(0x40023880);
Field<32> stm32f4::regs::rcc::PLLI2SCFGR(0x40023884);
/*
 * RTC
 */
Field<32> stm32f4::regs::rtc::TR(0x40002800);
Field<32> stm32f4::regs::rtc::DR(0x40002804);
Field<32> stm32f4::regs::rtc::CR(0x40002808);
Field<32> stm32f4::regs::rtc::ISR(0x4000280c);
Field<32> stm32f4::regs::rtc::PRER(0x40002810);
Field<32> stm32f4::regs::rtc::WUTR(0x40002814);
Field<32> stm32f4::regs::rtc::CALIBR(0x40002818);
Field<32> stm32f4::regs::rtc::ALRMAR(0x4000281c);
Field<32> stm32f4::regs::rtc::ALRMBR(0x40002820);
Field<32> stm32f4::regs::rtc::WPR(0x40002824);
Field<32> stm32f4::regs::rtc::SSR(0x40002828);
Field<32> stm32f4::regs::rtc::SHIFTR(0x4000282c);
Field<32> stm32f4::regs::rtc::TSTR(0x40002830);
Field<32> stm32f4::regs::rtc::TSDR(0x40002834);
Field<32> stm32f4::regs::rtc::TSSSR(0x40002838);
Field<32> stm32f4::regs::rtc::CALR(0x4000283c);
Field<32> stm32f4::regs::rtc::TAFCR(0x40002840);
Field<32> stm32f4::regs::rtc::ALRMASSR(0x40002844);
Field<32> stm32f4::regs::rtc::ALRMBSSR(0x40002848);
Field<32> stm32f4::regs::rtc::BKP0R(0x40002850);
Field<32> stm32f4::regs::rtc::BKP1R(0x40002854);
Field<32> stm32f4::regs::rtc::BKP2R(0x40002858);
Field<32> stm32f4::regs::rtc::BKP3R(0x4000285c);
Field<32> stm32f4::regs::rtc::BKP4R(0x40002860);
Field<32> stm32f4::regs::rtc::BKP5R(0x40002864);
Field<32> stm32f4::regs::rtc::BKP6R(0x40002868);
Field<32> stm32f4::regs::rtc::BKP7R(0x4000286c);
Field<32> stm32f4::regs::rtc::BKP8R(0x40002870);
Field<32> stm32f4::regs::rtc::BKP9R(0x40002874);
Field<32> stm32f4::regs::rtc::BKP10R(0x40002878);
Field<32> stm32f4::regs::rtc::BKP11R(0x4000287c);
Field<32> stm32f4::regs::rtc::BKP12R(0x40002880);
Field<32> stm32f4::regs::rtc::BKP13R(0x40002884);
Field<32> stm32f4::regs::rtc::BKP14R(0x40002888);
Field<32> stm32f4::regs::rtc::BKP15R(0x4000288c);
Field<32> stm32f4::regs::rtc::BKP16R(0x40002890);
Field<32> stm32f4::regs::rtc::BKP17R(0x40002894);
Field<32> stm32f4::regs::rtc::BKP18R(0x40002898);
Field<32> stm32f4::regs::rtc::BKP19R(0x4000289c);
/*
 * SDIO
 */
Field<32> stm32f4::regs::sdio::POWER(0x40012c00);
Field<32> stm32f4::regs::sdio::CLKCR(0x40012c04);
Field<32> stm32f4::regs::sdio::ARG(0x40012c08);
Field<32> stm32f4::regs::sdio::CMD(0x40012c0c);
Field<32> stm32f4::regs::sdio::RESPCMD(0x40012c10);
Field<32> stm32f4::regs::sdio::RESP1(0x40012c14);
Field<32> stm32f4::regs::sdio::RESP2(0x40012c18);
Field<32> stm32f4::regs::sdio::RESP3(0x40012c1c);
Field<32> stm32f4::regs::sdio::RESP4(0x40012c20);
Field<32> stm32f4::regs::sdio::DTIMER(0x40012c24);
Field<32> stm32f4::regs::sdio::DLEN(0x40012c28);
Field<32> stm32f4::regs::sdio::DCTRL(0x40012c2c);
Field<32> stm32f4::regs::sdio::DCOUNT(0x40012c30);
Field<32> stm32f4::regs::sdio::STA(0x40012c34);
Field<32> stm32f4::regs::sdio::ICR(0x40012c38);
Field<32> stm32f4::regs::sdio::MASK(0x40012c3c);
Field<32> stm32f4::regs::sdio::FIFOCNT(0x40012c48);
Field<32> stm32f4::regs::sdio::FIFO(0x40012c80);
/*
 * SYSCFG
 */
Field<32> stm32f4::regs::syscfg::MEMRM(0x40013800);
Field<32> stm32f4::regs::syscfg::PMC(0x40013804);
Field<32> stm32f4::regs::syscfg::EXTICR1(0x40013808);
Field<32> stm32f4::regs::syscfg::EXTICR2(0x4001380c);
Field<32> stm32f4::regs::syscfg::EXTICR3(0x40013810);
Field<32> stm32f4::regs::syscfg::EXTICR4(0x40013814);
Field<32> stm32f4::regs::syscfg::CMPCR(0x40013820);
/*
 * TIM1
 */
Field<32> stm32f4::regs::tim1::CR1(0x40010000);
Field<32> stm32f4::regs::tim1::CR2(0x40010004);
Field<32> stm32f4::regs::tim1::SMCR(0x40010008);
Field<32> stm32f4::regs::tim1::DIER(0x4001000c);
Field<32> stm32f4::regs::tim1::SR(0x40010010);
Field<32> stm32f4::regs::tim1::EGR(0x40010014);
Field<32> stm32f4::regs::tim1::CCMR1_Output(0x40010018);
Field<32> stm32f4::regs::tim1::CCMR1_Input(0x40010018);
Field<32> stm32f4::regs::tim1::CCMR2_Output(0x4001001c);
Field<32> stm32f4::regs::tim1::CCMR2_Input(0x4001001c);
Field<32> stm32f4::regs::tim1::CCER(0x40010020);
Field<32> stm32f4::regs::tim1::CNT(0x40010024);
Field<32> stm32f4::regs::tim1::PSC(0x40010028);
Field<32> stm32f4::regs::tim1::ARR(0x4001002c);
Field<32> stm32f4::regs::tim1::CCR1(0x40010034);
Field<32> stm32f4::regs::tim1::CCR2(0x40010038);
Field<32> stm32f4::regs::tim1::CCR3(0x4001003c);
Field<32> stm32f4::regs::tim1::CCR4(0x40010040);
Field<32> stm32f4::regs::tim1::DCR(0x40010048);
Field<32> stm32f4::regs::tim1::DMAR(0x4001004c);
Field<32> stm32f4::regs::tim1::RCR(0x40010030);
Field<32> stm32f4::regs::tim1::BDTR(0x40010044);
/*
 * TIM8
 */
Field<32> stm32f4::regs::tim8::CR1(0x40010400);
Field<32> stm32f4::regs::tim8::CR2(0x40010404);
Field<32> stm32f4::regs::tim8::SMCR(0x40010408);
Field<32> stm32f4::regs::tim8::DIER(0x4001040c);
Field<32> stm32f4::regs::tim8::SR(0x40010410);
Field<32> stm32f4::regs::tim8::EGR(0x40010414);
Field<32> stm32f4::regs::tim8::CCMR1_Output(0x40010418);
Field<32> stm32f4::regs::tim8::CCMR1_Input(0x40010418);
Field<32> stm32f4::regs::tim8::CCMR2_Output(0x4001041c);
Field<32> stm32f4::regs::tim8::CCMR2_Input(0x4001041c);
Field<32> stm32f4::regs::tim8::CCER(0x40010420);
Field<32> stm32f4::regs::tim8::CNT(0x40010424);
Field<32> stm32f4::regs::tim8::PSC(0x40010428);
Field<32> stm32f4::regs::tim8::ARR(0x4001042c);
Field<32> stm32f4::regs::tim8::CCR1(0x40010434);
Field<32> stm32f4::regs::tim8::CCR2(0x40010438);
Field<32> stm32f4::regs::tim8::CCR3(0x4001043c);
Field<32> stm32f4::regs::tim8::CCR4(0x40010440);
Field<32> stm32f4::regs::tim8::DCR(0x40010448);
Field<32> stm32f4::regs::tim8::DMAR(0x4001044c);
Field<32> stm32f4::regs::tim8::RCR(0x40010430);
Field<32> stm32f4::regs::tim8::BDTR(0x40010444);
/*
 * TIM10
 */
Field<32> stm32f4::regs::tim10::CR1(0x40014400);
Field<32> stm32f4::regs::tim10::DIER(0x4001440c);
Field<32> stm32f4::regs::tim10::SR(0x40014410);
Field<32> stm32f4::regs::tim10::EGR(0x40014414);
Field<32> stm32f4::regs::tim10::CCMR1_Output(0x40014418);
Field<32> stm32f4::regs::tim10::CCMR1_Input(0x40014418);
Field<32> stm32f4::regs::tim10::CCER(0x40014420);
Field<32> stm32f4::regs::tim10::CNT(0x40014424);
Field<32> stm32f4::regs::tim10::PSC(0x40014428);
Field<32> stm32f4::regs::tim10::ARR(0x4001442c);
Field<32> stm32f4::regs::tim10::CCR1(0x40014434);
/*
 * TIM11
 */
Field<32> stm32f4::regs::tim11::CR1(0x40014800);
Field<32> stm32f4::regs::tim11::DIER(0x4001480c);
Field<32> stm32f4::regs::tim11::SR(0x40014810);
Field<32> stm32f4::regs::tim11::EGR(0x40014814);
Field<32> stm32f4::regs::tim11::CCMR1_Output(0x40014818);
Field<32> stm32f4::regs::tim11::CCMR1_Input(0x40014818);
Field<32> stm32f4::regs::tim11::CCER(0x40014820);
Field<32> stm32f4::regs::tim11::CNT(0x40014824);
Field<32> stm32f4::regs::tim11::PSC(0x40014828);
Field<32> stm32f4::regs::tim11::ARR(0x4001482c);
Field<32> stm32f4::regs::tim11::CCR1(0x40014834);
Field<32> stm32f4::regs::tim11::OR(0x40014850);
/*
 * TIM2
 */
Field<32> stm32f4::regs::tim2::CR1(0x40000000);
Field<32> stm32f4::regs::tim2::CR2(0x40000004);
Field<32> stm32f4::regs::tim2::SMCR(0x40000008);
Field<32> stm32f4::regs::tim2::DIER(0x4000000c);
Field<32> stm32f4::regs::tim2::SR(0x40000010);
Field<32> stm32f4::regs::tim2::EGR(0x40000014);
Field<32> stm32f4::regs::tim2::CCMR1_Output(0x40000018);
Field<32> stm32f4::regs::tim2::CCMR1_Input(0x40000018);
Field<32> stm32f4::regs::tim2::CCMR2_Output(0x4000001c);
Field<32> stm32f4::regs::tim2::CCMR2_Input(0x4000001c);
Field<32> stm32f4::regs::tim2::CCER(0x40000020);
Field<32> stm32f4::regs::tim2::CNT(0x40000024);
Field<32> stm32f4::regs::tim2::PSC(0x40000028);
Field<32> stm32f4::regs::tim2::ARR(0x4000002c);
Field<32> stm32f4::regs::tim2::CCR1(0x40000034);
Field<32> stm32f4::regs::tim2::CCR2(0x40000038);
Field<32> stm32f4::regs::tim2::CCR3(0x4000003c);
Field<32> stm32f4::regs::tim2::CCR4(0x40000040);
Field<32> stm32f4::regs::tim2::DCR(0x40000048);
Field<32> stm32f4::regs::tim2::DMAR(0x4000004c);
Field<32> stm32f4::regs::tim2::OR(0x40000050);
/*
 * TIM3
 */
Field<32> stm32f4::regs::tim3::CR1(0x40000400);
Field<32> stm32f4::regs::tim3::CR2(0x40000404);
Field<32> stm32f4::regs::tim3::SMCR(0x40000408);
Field<32> stm32f4::regs::tim3::DIER(0x4000040c);
Field<32> stm32f4::regs::tim3::SR(0x40000410);
Field<32> stm32f4::regs::tim3::EGR(0x40000414);
Field<32> stm32f4::regs::tim3::CCMR1_Output(0x40000418);
Field<32> stm32f4::regs::tim3::CCMR1_Input(0x40000418);
Field<32> stm32f4::regs::tim3::CCMR2_Output(0x4000041c);
Field<32> stm32f4::regs::tim3::CCMR2_Input(0x4000041c);
Field<32> stm32f4::regs::tim3::CCER(0x40000420);
Field<32> stm32f4::regs::tim3::CNT(0x40000424);
Field<32> stm32f4::regs::tim3::PSC(0x40000428);
Field<32> stm32f4::regs::tim3::ARR(0x4000042c);
Field<32> stm32f4::regs::tim3::CCR1(0x40000434);
Field<32> stm32f4::regs::tim3::CCR2(0x40000438);
Field<32> stm32f4::regs::tim3::CCR3(0x4000043c);
Field<32> stm32f4::regs::tim3::CCR4(0x40000440);
Field<32> stm32f4::regs::tim3::DCR(0x40000448);
Field<32> stm32f4::regs::tim3::DMAR(0x4000044c);
/*
 * TIM4
 */
Field<32> stm32f4::regs::tim4::CR1(0x40000800);
Field<32> stm32f4::regs::tim4::CR2(0x40000804);
Field<32> stm32f4::regs::tim4::SMCR(0x40000808);
Field<32> stm32f4::regs::tim4::DIER(0x4000080c);
Field<32> stm32f4::regs::tim4::SR(0x40000810);
Field<32> stm32f4::regs::tim4::EGR(0x40000814);
Field<32> stm32f4::regs::tim4::CCMR1_Output(0x40000818);
Field<32> stm32f4::regs::tim4::CCMR1_Input(0x40000818);
Field<32> stm32f4::regs::tim4::CCMR2_Output(0x4000081c);
Field<32> stm32f4::regs::tim4::CCMR2_Input(0x4000081c);
Field<32> stm32f4::regs::tim4::CCER(0x40000820);
Field<32> stm32f4::regs::tim4::CNT(0x40000824);
Field<32> stm32f4::regs::tim4::PSC(0x40000828);
Field<32> stm32f4::regs::tim4::ARR(0x4000082c);
Field<32> stm32f4::regs::tim4::CCR1(0x40000834);
Field<32> stm32f4::regs::tim4::CCR2(0x40000838);
Field<32> stm32f4::regs::tim4::CCR3(0x4000083c);
Field<32> stm32f4::regs::tim4::CCR4(0x40000840);
Field<32> stm32f4::regs::tim4::DCR(0x40000848);
Field<32> stm32f4::regs::tim4::DMAR(0x4000084c);
/*
 * TIM5
 */
Field<32> stm32f4::regs::tim5::CR1(0x40000c00);
Field<32> stm32f4::regs::tim5::CR2(0x40000c04);
Field<32> stm32f4::regs::tim5::SMCR(0x40000c08);
Field<32> stm32f4::regs::tim5::DIER(0x40000c0c);
Field<32> stm32f4::regs::tim5::SR(0x40000c10);
Field<32> stm32f4::regs::tim5::EGR(0x40000c14);
Field<32> stm32f4::regs::tim5::CCMR1_Output(0x40000c18);
Field<32> stm32f4::regs::tim5::CCMR1_Input(0x40000c18);
Field<32> stm32f4::regs::tim5::CCMR2_Output(0x40000c1c);
Field<32> stm32f4::regs::tim5::CCMR2_Input(0x40000c1c);
Field<32> stm32f4::regs::tim5::CCER(0x40000c20);
Field<32> stm32f4::regs::tim5::CNT(0x40000c24);
Field<32> stm32f4::regs::tim5::PSC(0x40000c28);
Field<32> stm32f4::regs::tim5::ARR(0x40000c2c);
Field<32> stm32f4::regs::tim5::CCR1(0x40000c34);
Field<32> stm32f4::regs::tim5::CCR2(0x40000c38);
Field<32> stm32f4::regs::tim5::CCR3(0x40000c3c);
Field<32> stm32f4::regs::tim5::CCR4(0x40000c40);
Field<32> stm32f4::regs::tim5::DCR(0x40000c48);
Field<32> stm32f4::regs::tim5::DMAR(0x40000c4c);
Field<32> stm32f4::regs::tim5::OR(0x40000c50);
/*
 * TIM9
 */
Field<32> stm32f4::regs::tim9::CR1(0x40014000);
Field<32> stm32f4::regs::tim9::CR2(0x40014004);
Field<32> stm32f4::regs::tim9::SMCR(0x40014008);
Field<32> stm32f4::regs::tim9::DIER(0x4001400c);
Field<32> stm32f4::regs::tim9::SR(0x40014010);
Field<32> stm32f4::regs::tim9::EGR(0x40014014);
Field<32> stm32f4::regs::tim9::CCMR1_Output(0x40014018);
Field<32> stm32f4::regs::tim9::CCMR1_Input(0x40014018);
Field<32> stm32f4::regs::tim9::CCER(0x40014020);
Field<32> stm32f4::regs::tim9::CNT(0x40014024);
Field<32> stm32f4::regs::tim9::PSC(0x40014028);
Field<32> stm32f4::regs::tim9::ARR(0x4001402c);
Field<32> stm32f4::regs::tim9::CCR1(0x40014034);
Field<32> stm32f4::regs::tim9::CCR2(0x40014038);
/*
 * USART1
 */
Field<32> stm32f4::regs::usart1::SR(0x40011000);
Field<32> stm32f4::regs::usart1::DR(0x40011004);
Field<32> stm32f4::regs::usart1::BRR(0x40011008);
Field<32> stm32f4::regs::usart1::CR1(0x4001100c);
Field<32> stm32f4::regs::usart1::CR2(0x40011010);
Field<32> stm32f4::regs::usart1::CR3(0x40011014);
Field<32> stm32f4::regs::usart1::GTPR(0x40011018);
/*
 * USART2
 */
Field<32> stm32f4::regs::usart2::SR(0x40004400);
Field<32> stm32f4::regs::usart2::DR(0x40004404);
Field<32> stm32f4::regs::usart2::BRR(0x40004408);
Field<32> stm32f4::regs::usart2::CR1(0x4000440c);
Field<32> stm32f4::regs::usart2::CR2(0x40004410);
Field<32> stm32f4::regs::usart2::CR3(0x40004414);
Field<32> stm32f4::regs::usart2::GTPR(0x40004418);
/*
 * USART6
 */
Field<32> stm32f4::regs::usart6::SR(0x40011400);
Field<32> stm32f4::regs::usart6::DR(0x40011404);
Field<32> stm32f4::regs::usart6::BRR(0x40011408);
Field<32> stm32f4::regs::usart6::CR1(0x4001140c);
Field<32> stm32f4::regs::usart6::CR2(0x40011410);
Field<32> stm32f4::regs::usart6::CR3(0x40011414);
Field<32> stm32f4::regs::usart6::GTPR(0x40011418);
/*
 * WWDG
 */
Field<32> stm32f4::regs::wwdg::CR(0x40002c00);
Field<32> stm32f4::regs::wwdg::CFR(0x40002c04);
Field<32> stm32f4::regs::wwdg::SR(0x40002c08);
/*
 * DMA2
 */
Field<32> stm32f4::regs::dma2::LISR(0x40026400);
Field<32> stm32f4::regs::dma2::HISR(0x40026404);
Field<32> stm32f4::regs::dma2::LIFCR(0x40026408);
Field<32> stm32f4::regs::dma2::HIFCR(0x4002640c);
Field<32> stm32f4::regs::dma2::S0CR(0x40026410);
Field<32> stm32f4::regs::dma2::S0NDTR(0x40026414);
Field<32> stm32f4::regs::dma2::S0PAR(0x40026418);
Field<32> stm32f4::regs::dma2::S0M0AR(0x4002641c);
Field<32> stm32f4::regs::dma2::S0M1AR(0x40026420);
Field<32> stm32f4::regs::dma2::S0FCR(0x40026424);
Field<32> stm32f4::regs::dma2::S1CR(0x40026428);
Field<32> stm32f4::regs::dma2::S1NDTR(0x4002642c);
Field<32> stm32f4::regs::dma2::S1PAR(0x40026430);
Field<32> stm32f4::regs::dma2::S1M0AR(0x40026434);
Field<32> stm32f4::regs::dma2::S1M1AR(0x40026438);
Field<32> stm32f4::regs::dma2::S1FCR(0x4002643c);
Field<32> stm32f4::regs::dma2::S2CR(0x40026440);
Field<32> stm32f4::regs::dma2::S2NDTR(0x40026444);
Field<32> stm32f4::regs::dma2::S2PAR(0x40026448);
Field<32> stm32f4::regs::dma2::S2M0AR(0x4002644c);
Field<32> stm32f4::regs::dma2::S2M1AR(0x40026450);
Field<32> stm32f4::regs::dma2::S2FCR(0x40026454);
Field<32> stm32f4::regs::dma2::S3CR(0x40026458);
Field<32> stm32f4::regs::dma2::S3NDTR(0x4002645c);
Field<32> stm32f4::regs::dma2::S3PAR(0x40026460);
Field<32> stm32f4::regs::dma2::S3M0AR(0x40026464);
Field<32> stm32f4::regs::dma2::S3M1AR(0x40026468);
Field<32> stm32f4::regs::dma2::S3FCR(0x4002646c);
Field<32> stm32f4::regs::dma2::S4CR(0x40026470);
Field<32> stm32f4::regs::dma2::S4NDTR(0x40026474);
Field<32> stm32f4::regs::dma2::S4PAR(0x40026478);
Field<32> stm32f4::regs::dma2::S4M0AR(0x4002647c);
Field<32> stm32f4::regs::dma2::S4M1AR(0x40026480);
Field<32> stm32f4::regs::dma2::S4FCR(0x40026484);
Field<32> stm32f4::regs::dma2::S5CR(0x40026488);
Field<32> stm32f4::regs::dma2::S5NDTR(0x4002648c);
Field<32> stm32f4::regs::dma2::S5PAR(0x40026490);
Field<32> stm32f4::regs::dma2::S5M0AR(0x40026494);
Field<32> stm32f4::regs::dma2::S5M1AR(0x40026498);
Field<32> stm32f4::regs::dma2::S5FCR(0x4002649c);
Field<32> stm32f4::regs::dma2::S6CR(0x400264a0);
Field<32> stm32f4::regs::dma2::S6NDTR(0x400264a4);
Field<32> stm32f4::regs::dma2::S6PAR(0x400264a8);
Field<32> stm32f4::regs::dma2::S6M0AR(0x400264ac);
Field<32> stm32f4::regs::dma2::S6M1AR(0x400264b0);
Field<32> stm32f4::regs::dma2::S6FCR(0x400264b4);
Field<32> stm32f4::regs::dma2::S7CR(0x400264b8);
Field<32> stm32f4::regs::dma2::S7NDTR(0x400264bc);
Field<32> stm32f4::regs::dma2::S7PAR(0x400264c0);
Field<32> stm32f4::regs::dma2::S7M0AR(0x400264c4);
Field<32> stm32f4::regs::dma2::S7M1AR(0x400264c8);
Field<32> stm32f4::regs::dma2::S7FCR(0x400264cc);
/*
 * DMA1
 */
Field<32> stm32f4::regs::dma1::LISR(0x40026000);
Field<32> stm32f4::regs::dma1::HISR(0x40026004);
Field<32> stm32f4::regs::dma1::LIFCR(0x40026008);
Field<32> stm32f4::regs::dma1::HIFCR(0x4002600c);
Field<32> stm32f4::regs::dma1::S0CR(0x40026010);
Field<32> stm32f4::regs::dma1::S0NDTR(0x40026014);
Field<32> stm32f4::regs::dma1::S0PAR(0x40026018);
Field<32> stm32f4::regs::dma1::S0M0AR(0x4002601c);
Field<32> stm32f4::regs::dma1::S0M1AR(0x40026020);
Field<32> stm32f4::regs::dma1::S0FCR(0x40026024);
Field<32> stm32f4::regs::dma1::S1CR(0x40026028);
Field<32> stm32f4::regs::dma1::S1NDTR(0x4002602c);
Field<32> stm32f4::regs::dma1::S1PAR(0x40026030);
Field<32> stm32f4::regs::dma1::S1M0AR(0x40026034);
Field<32> stm32f4::regs::dma1::S1M1AR(0x40026038);
Field<32> stm32f4::regs::dma1::S1FCR(0x4002603c);
Field<32> stm32f4::regs::dma1::S2CR(0x40026040);
Field<32> stm32f4::regs::dma1::S2NDTR(0x40026044);
Field<32> stm32f4::regs::dma1::S2PAR(0x40026048);
Field<32> stm32f4::regs::dma1::S2M0AR(0x4002604c);
Field<32> stm32f4::regs::dma1::S2M1AR(0x40026050);
Field<32> stm32f4::regs::dma1::S2FCR(0x40026054);
Field<32> stm32f4::regs::dma1::S3CR(0x40026058);
Field<32> stm32f4::regs::dma1::S3NDTR(0x4002605c);
Field<32> stm32f4::regs::dma1::S3PAR(0x40026060);
Field<32> stm32f4::regs::dma1::S3M0AR(0x40026064);
Field<32> stm32f4::regs::dma1::S3M1AR(0x40026068);
Field<32> stm32f4::regs::dma1::S3FCR(0x4002606c);
Field<32> stm32f4::regs::dma1::S4CR(0x40026070);
Field<32> stm32f4::regs::dma1::S4NDTR(0x40026074);
Field<32> stm32f4::regs::dma1::S4PAR(0x40026078);
Field<32> stm32f4::regs::dma1::S4M0AR(0x4002607c);
Field<32> stm32f4::regs::dma1::S4M1AR(0x40026080);
Field<32> stm32f4::regs::dma1::S4FCR(0x40026084);
Field<32> stm32f4::regs::dma1::S5CR(0x40026088);
Field<32> stm32f4::regs::dma1::S5NDTR(0x4002608c);
Field<32> stm32f4::regs::dma1::S5PAR(0x40026090);
Field<32> stm32f4::regs::dma1::S5M0AR(0x40026094);
Field<32> stm32f4::regs::dma1::S5M1AR(0x40026098);
Field<32> stm32f4::regs::dma1::S5FCR(0x4002609c);
Field<32> stm32f4::regs::dma1::S6CR(0x400260a0);
Field<32> stm32f4::regs::dma1::S6NDTR(0x400260a4);
Field<32> stm32f4::regs::dma1::S6PAR(0x400260a8);
Field<32> stm32f4::regs::dma1::S6M0AR(0x400260ac);
Field<32> stm32f4::regs::dma1::S6M1AR(0x400260b0);
Field<32> stm32f4::regs::dma1::S6FCR(0x400260b4);
Field<32> stm32f4::regs::dma1::S7CR(0x400260b8);
Field<32> stm32f4::regs::dma1::S7NDTR(0x400260bc);
Field<32> stm32f4::regs::dma1::S7PAR(0x400260c0);
Field<32> stm32f4::regs::dma1::S7M0AR(0x400260c4);
Field<32> stm32f4::regs::dma1::S7M1AR(0x400260c8);
Field<32> stm32f4::regs::dma1::S7FCR(0x400260cc);
/*
 * GPIOH
 */
Field<32> stm32f4::regs::gpioh::MODER(0x40021c00);
Field<32> stm32f4::regs::gpioh::OTYPER(0x40021c04);
Field<32> stm32f4::regs::gpioh::OSPEEDR(0x40021c08);
Field<32> stm32f4::regs::gpioh::PUPDR(0x40021c0c);
Field<32> stm32f4::regs::gpioh::IDR(0x40021c10);
Field<32> stm32f4::regs::gpioh::ODR(0x40021c14);
Field<32> stm32f4::regs::gpioh::BSRR(0x40021c18);
Field<32> stm32f4::regs::gpioh::LCKR(0x40021c1c);
Field<32> stm32f4::regs::gpioh::AFRL(0x40021c20);
Field<32> stm32f4::regs::gpioh::AFRH(0x40021c24);
/*
 * GPIOE
 */
Field<32> stm32f4::regs::gpioe::MODER(0x40021000);
Field<32> stm32f4::regs::gpioe::OTYPER(0x40021004);
Field<32> stm32f4::regs::gpioe::OSPEEDR(0x40021008);
Field<32> stm32f4::regs::gpioe::PUPDR(0x4002100c);
Field<32> stm32f4::regs::gpioe::IDR(0x40021010);
Field<32> stm32f4::regs::gpioe::ODR(0x40021014);
Field<32> stm32f4::regs::gpioe::BSRR(0x40021018);
Field<32> stm32f4::regs::gpioe::LCKR(0x4002101c);
Field<32> stm32f4::regs::gpioe::AFRL(0x40021020);
Field<32> stm32f4::regs::gpioe::AFRH(0x40021024);
/*
 * GPIOD
 */
Field<32> stm32f4::regs::gpiod::MODER(0x40020c00);
Field<32> stm32f4::regs::gpiod::OTYPER(0x40020c04);
Field<32> stm32f4::regs::gpiod::OSPEEDR(0x40020c08);
Field<32> stm32f4::regs::gpiod::PUPDR(0x40020c0c);
Field<32> stm32f4::regs::gpiod::IDR(0x40020c10);
Field<32> stm32f4::regs::gpiod::ODR(0x40020c14);
Field<32> stm32f4::regs::gpiod::BSRR(0x40020c18);
Field<32> stm32f4::regs::gpiod::LCKR(0x40020c1c);
Field<32> stm32f4::regs::gpiod::AFRL(0x40020c20);
Field<32> stm32f4::regs::gpiod::AFRH(0x40020c24);
/*
 * GPIOC
 */
Field<32> stm32f4::regs::gpioc::MODER(0x40020800);
Field<32> stm32f4::regs::gpioc::OTYPER(0x40020804);
Field<32> stm32f4::regs::gpioc::OSPEEDR(0x40020808);
Field<32> stm32f4::regs::gpioc::PUPDR(0x4002080c);
Field<32> stm32f4::regs::gpioc::IDR(0x40020810);
Field<32> stm32f4::regs::gpioc::ODR(0x40020814);
Field<32> stm32f4::regs::gpioc::BSRR(0x40020818);
Field<32> stm32f4::regs::gpioc::LCKR(0x4002081c);
Field<32> stm32f4::regs::gpioc::AFRL(0x40020820);
Field<32> stm32f4::regs::gpioc::AFRH(0x40020824);
/*
 * GPIOB
 */
Field<32> stm32f4::regs::gpiob::MODER(0x40020400);
Field<32> stm32f4::regs::gpiob::OTYPER(0x40020404);
Field<32> stm32f4::regs::gpiob::OSPEEDR(0x40020408);
Field<32> stm32f4::regs::gpiob::PUPDR(0x4002040c);
Field<32> stm32f4::regs::gpiob::IDR(0x40020410);
Field<32> stm32f4::regs::gpiob::ODR(0x40020414);
Field<32> stm32f4::regs::gpiob::BSRR(0x40020418);
Field<32> stm32f4::regs::gpiob::LCKR(0x4002041c);
Field<32> stm32f4::regs::gpiob::AFRL(0x40020420);
Field<32> stm32f4::regs::gpiob::AFRH(0x40020424);
/*
 * GPIOA
 */
Field<32> stm32f4::regs::gpioa::MODER(0x40020000);
Field<32> stm32f4::regs::gpioa::OTYPER(0x40020004);
Field<32> stm32f4::regs::gpioa::OSPEEDR(0x40020008);
Field<32> stm32f4::regs::gpioa::PUPDR(0x4002000c);
Field<32> stm32f4::regs::gpioa::IDR(0x40020010);
Field<32> stm32f4::regs::gpioa::ODR(0x40020014);
Field<32> stm32f4::regs::gpioa::BSRR(0x40020018);
Field<32> stm32f4::regs::gpioa::LCKR(0x4002001c);
Field<32> stm32f4::regs::gpioa::AFRL(0x40020020);
Field<32> stm32f4::regs::gpioa::AFRH(0x40020024);
/*
 * I2C3
 */
Field<32> stm32f4::regs::i2c3::CR1(0x40005c00);
Field<32> stm32f4::regs::i2c3::CR2(0x40005c04);
Field<32> stm32f4::regs::i2c3::OAR1(0x40005c08);
Field<32> stm32f4::regs::i2c3::OAR2(0x40005c0c);
Field<32> stm32f4::regs::i2c3::DR(0x40005c10);
Field<32> stm32f4::regs::i2c3::SR1(0x40005c14);
Field<32> stm32f4::regs::i2c3::SR2(0x40005c18);
Field<32> stm32f4::regs::i2c3::CCR(0x40005c1c);
Field<32> stm32f4::regs::i2c3::TRISE(0x40005c20);
/*
 * I2C2
 */
Field<32> stm32f4::regs::i2c2::CR1(0x40005800);
Field<32> stm32f4::regs::i2c2::CR2(0x40005804);
Field<32> stm32f4::regs::i2c2::OAR1(0x40005808);
Field<32> stm32f4::regs::i2c2::OAR2(0x4000580c);
Field<32> stm32f4::regs::i2c2::DR(0x40005810);
Field<32> stm32f4::regs::i2c2::SR1(0x40005814);
Field<32> stm32f4::regs::i2c2::SR2(0x40005818);
Field<32> stm32f4::regs::i2c2::CCR(0x4000581c);
Field<32> stm32f4::regs::i2c2::TRISE(0x40005820);
/*
 * I2C1
 */
Field<32> stm32f4::regs::i2c1::CR1(0x40005400);
Field<32> stm32f4::regs::i2c1::CR2(0x40005404);
Field<32> stm32f4::regs::i2c1::OAR1(0x40005408);
Field<32> stm32f4::regs::i2c1::OAR2(0x4000540c);
Field<32> stm32f4::regs::i2c1::DR(0x40005410);
Field<32> stm32f4::regs::i2c1::SR1(0x40005414);
Field<32> stm32f4::regs::i2c1::SR2(0x40005418);
Field<32> stm32f4::regs::i2c1::CCR(0x4000541c);
Field<32> stm32f4::regs::i2c1::TRISE(0x40005420);
/*
 * I2S2ext
 */
Field<32> stm32f4::regs::i2s2ext::CR1(0x40003400);
Field<32> stm32f4::regs::i2s2ext::CR2(0x40003404);
Field<32> stm32f4::regs::i2s2ext::SR(0x40003408);
Field<32> stm32f4::regs::i2s2ext::DR(0x4000340c);
Field<32> stm32f4::regs::i2s2ext::CRCPR(0x40003410);
Field<32> stm32f4::regs::i2s2ext::RXCRCR(0x40003414);
Field<32> stm32f4::regs::i2s2ext::TXCRCR(0x40003418);
Field<32> stm32f4::regs::i2s2ext::I2SCFGR(0x4000341c);
Field<32> stm32f4::regs::i2s2ext::I2SPR(0x40003420);
/*
 * I2S3ext
 */
Field<32> stm32f4::regs::i2s3ext::CR1(0x40004000);
Field<32> stm32f4::regs::i2s3ext::CR2(0x40004004);
Field<32> stm32f4::regs::i2s3ext::SR(0x40004008);
Field<32> stm32f4::regs::i2s3ext::DR(0x4000400c);
Field<32> stm32f4::regs::i2s3ext::CRCPR(0x40004010);
Field<32> stm32f4::regs::i2s3ext::RXCRCR(0x40004014);
Field<32> stm32f4::regs::i2s3ext::TXCRCR(0x40004018);
Field<32> stm32f4::regs::i2s3ext::I2SCFGR(0x4000401c);
Field<32> stm32f4::regs::i2s3ext::I2SPR(0x40004020);
/*
 * SPI1
 */
Field<32> stm32f4::regs::spi1::CR1(0x40013000);
Field<32> stm32f4::regs::spi1::CR2(0x40013004);
Field<32> stm32f4::regs::spi1::SR(0x40013008);
Field<32> stm32f4::regs::spi1::DR(0x4001300c);
Field<32> stm32f4::regs::spi1::CRCPR(0x40013010);
Field<32> stm32f4::regs::spi1::RXCRCR(0x40013014);
Field<32> stm32f4::regs::spi1::TXCRCR(0x40013018);
Field<32> stm32f4::regs::spi1::I2SCFGR(0x4001301c);
Field<32> stm32f4::regs::spi1::I2SPR(0x40013020);
/*
 * SPI2
 */
Field<32> stm32f4::regs::spi2::CR1(0x40003800);
Field<32> stm32f4::regs::spi2::CR2(0x40003804);
Field<32> stm32f4::regs::spi2::SR(0x40003808);
Field<32> stm32f4::regs::spi2::DR(0x4000380c);
Field<32> stm32f4::regs::spi2::CRCPR(0x40003810);
Field<32> stm32f4::regs::spi2::RXCRCR(0x40003814);
Field<32> stm32f4::regs::spi2::TXCRCR(0x40003818);
Field<32> stm32f4::regs::spi2::I2SCFGR(0x4000381c);
Field<32> stm32f4::regs::spi2::I2SPR(0x40003820);
/*
 * SPI3
 */
Field<32> stm32f4::regs::spi3::CR1(0x40003c00);
Field<32> stm32f4::regs::spi3::CR2(0x40003c04);
Field<32> stm32f4::regs::spi3::SR(0x40003c08);
Field<32> stm32f4::regs::spi3::DR(0x40003c0c);
Field<32> stm32f4::regs::spi3::CRCPR(0x40003c10);
Field<32> stm32f4::regs::spi3::RXCRCR(0x40003c14);
Field<32> stm32f4::regs::spi3::TXCRCR(0x40003c18);
Field<32> stm32f4::regs::spi3::I2SCFGR(0x40003c1c);
Field<32> stm32f4::regs::spi3::I2SPR(0x40003c20);
/*
 * SPI4
 */
Field<32> stm32f4::regs::spi4::CR1(0x40013400);
Field<32> stm32f4::regs::spi4::CR2(0x40013404);
Field<32> stm32f4::regs::spi4::SR(0x40013408);
Field<32> stm32f4::regs::spi4::DR(0x4001340c);
Field<32> stm32f4::regs::spi4::CRCPR(0x40013410);
Field<32> stm32f4::regs::spi4::RXCRCR(0x40013414);
Field<32> stm32f4::regs::spi4::TXCRCR(0x40013418);
Field<32> stm32f4::regs::spi4::I2SCFGR(0x4001341c);
Field<32> stm32f4::regs::spi4::I2SPR(0x40013420);
/*
 * SPI5
 */
Field<32> stm32f4::regs::spi5::CR1(0x40015000);
Field<32> stm32f4::regs::spi5::CR2(0x40015004);
Field<32> stm32f4::regs::spi5::SR(0x40015008);
Field<32> stm32f4::regs::spi5::DR(0x4001500c);
Field<32> stm32f4::regs::spi5::CRCPR(0x40015010);
Field<32> stm32f4::regs::spi5::RXCRCR(0x40015014);
Field<32> stm32f4::regs::spi5::TXCRCR(0x40015018);
Field<32> stm32f4::regs::spi5::I2SCFGR(0x4001501c);
Field<32> stm32f4::regs::spi5::I2SPR(0x40015020);
/*
 * NVIC
 */
Field<32> stm32f4::regs::nvic::ICTR(0xe000e004);
Field<32> stm32f4::regs::nvic::STIR(0xe000ef00);
Field<32> stm32f4::regs::nvic::ISER0(0xe000e100);
Field<32> stm32f4::regs::nvic::ISER1(0xe000e104);
Field<32> stm32f4::regs::nvic::ISER2(0xe000e108);
Field<32> stm32f4::regs::nvic::ICER0(0xe000e180);
Field<32> stm32f4::regs::nvic::ICER1(0xe000e184);
Field<32> stm32f4::regs::nvic::ICER2(0xe000e188);
Field<32> stm32f4::regs::nvic::ISPR0(0xe000e200);
Field<32> stm32f4::regs::nvic::ISPR1(0xe000e204);
Field<32> stm32f4::regs::nvic::ISPR2(0xe000e208);
Field<32> stm32f4::regs::nvic::ICPR0(0xe000e280);
Field<32> stm32f4::regs::nvic::ICPR1(0xe000e284);
Field<32> stm32f4::regs::nvic::ICPR2(0xe000e288);
Field<32> stm32f4::regs::nvic::IABR0(0xe000e300);
Field<32> stm32f4::regs::nvic::IABR1(0xe000e304);
Field<32> stm32f4::regs::nvic::IABR2(0xe000e308);
Field<32> stm32f4::regs::nvic::IPR0(0xe000e400);
Field<32> stm32f4::regs::nvic::IPR1(0xe000e404);
Field<32> stm32f4::regs::nvic::IPR2(0xe000e408);
Field<32> stm32f4::regs::nvic::IPR3(0xe000e40c);
Field<32> stm32f4::regs::nvic::IPR4(0xe000e410);
Field<32> stm32f4::regs::nvic::IPR5(0xe000e414);
Field<32> stm32f4::regs::nvic::IPR6(0xe000e418);
Field<32> stm32f4::regs::nvic::IPR7(0xe000e41c);
Field<32> stm32f4::regs::nvic::IPR8(0xe000e420);
Field<32> stm32f4::regs::nvic::IPR9(0xe000e424);
Field<32> stm32f4::regs::nvic::IPR10(0xe000e428);
Field<32> stm32f4::regs::nvic::IPR11(0xe000e42c);
Field<32> stm32f4::regs::nvic::IPR12(0xe000e430);
Field<32> stm32f4::regs::nvic::IPR13(0xe000e434);
Field<32> stm32f4::regs::nvic::IPR14(0xe000e438);
Field<32> stm32f4::regs::nvic::IPR15(0xe000e43c);
Field<32> stm32f4::regs::nvic::IPR16(0xe000e440);
Field<32> stm32f4::regs::nvic::IPR17(0xe000e444);
Field<32> stm32f4::regs::nvic::IPR18(0xe000e448);
Field<32> stm32f4::regs::nvic::IPR19(0xe000e44c);
