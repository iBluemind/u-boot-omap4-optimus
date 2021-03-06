#define MUX_DEFAULT_OMAP4() \
MV(CP(GPMC_AD0),	PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1)  	\
MV(CP(GPMC_AD1),	PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1)  	\
MV(CP(GPMC_AD2),	PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1)  	\
MV(CP(GPMC_AD3),	PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1)  	\
MV(CP(GPMC_AD4),	PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1)  	\
MV(CP(GPMC_AD5),	PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1)  	\
MV(CP(GPMC_AD6),	PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1)  	\
MV(CP(GPMC_AD7),	PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1)  	\
MV(CP(GPMC_AD8),	M7)			\
MV(CP(GPMC_AD9),	M7)			\
MV(CP(GPMC_AD10),	M7)			\
MV(CP(GPMC_AD11),	M7)			\
MV(CP(GPMC_AD12),	M7)			\
MV(CP(GPMC_AD13),	M7)			\
MV(CP(GPMC_AD14),	M7)			\
MV(CP(GPMC_AD15),	M7)			\
MV(CP(GPMC_A16),	PTU | IEN | M3)				\
MV(CP(GPMC_A17),	PTU | M3)					\
MV(CP(GPMC_A18),	PTU | IEN | M3)				\
MV(CP(GPMC_A19),	PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)		 \
MV(CP(GPMC_A20),	M7)			\
MV(CP(GPMC_A21),	M7)			\
MV(CP(GPMC_A22),	M7)			\
MV(CP(GPMC_A23),	M7)			\
MV(CP(GPMC_A24),	M7)			\
MV(CP(GPMC_A25),	M7)			\
MV(CP(GPMC_NCS0),	M7)			\
MV(CP(GPMC_NCS1),	OFF_EN | PTU | IEN | M3)					\
MV(CP(GPMC_NCS2),	PTU | IEN | M3)					\
MV(CP(GPMC_NCS3),	M7)			\
MV(CP(GPMC_NWP),	M7)			\
MV(CP(GPMC_CLK),		PTD | M3)   \
MV(CP(GPMC_NADV_ALE),	M7)		\
MV(CP(GPMC_NOE),	PTU | IEN | OFF_EN | OFF_OUT_PTD | M1)		 \
MV(CP(GPMC_NWE),	PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1)	 \
MV(CP(GPMC_NBE0_CLE),	M7)		\
MV(CP(GPMC_NBE1),	PTU | IEN | M3)				\
MV(CP(GPMC_WAIT0),	M7)			\
MV(CP(GPMC_WAIT1),	M7)			\
MV(CP(C2C_DATA11),	M7)			\
MV(CP(C2C_DATA12),	M7)			\
MV(CP(C2C_DATA13),	M7)			\
MV(CP(C2C_DATA14),	M7)			\
MV(CP(C2C_DATA15),		PTD | M3)				\
MV(CP(HDMI_HPD),	M0)							\
MV(CP(HDMI_CEC),	M0)							\
MV(CP(HDMI_DDC_SCL),	PTU | M0)				\
MV(CP(HDMI_DDC_SDA),	PTU | IEN | M0)			\
MV(CP(CSI21_DX0),	IEN | M0)		\
MV(CP(CSI21_DY0),	IEN | M0)		\
MV(CP(CSI21_DX1),	IEN | M0)		\
MV(CP(CSI21_DY1),	IEN | M0)		\
MV(CP(CSI21_DX2),	IEN | M0)		\
MV(CP(CSI21_DY2),	IEN | M0)		\
MV(CP(CSI21_DX3),	PTD | M0)		\
MV(CP(CSI21_DY3),	PTD | M0)		\
MV(CP(CSI21_DX4),	IEN | M0)		\
MV(CP(CSI21_DY4),	IEN | M0)		\
MV(CP(CSI22_DX0),	IEN | M0)		\
MV(CP(CSI22_DY0),	IEN | M0)		\
MV(CP(CSI22_DX1),	IEN | M0)	 \
MV(CP(CSI22_DY1),	IEN | M0)	 \
MV(CP(CAM_SHUTTER),	IEN | M3)	 \
MV(CP(CAM_STROBE),	PTD | M3)	 \
MV(CP(CAM_GLOBALRESET),		PTD | M3)	 \
MV(CP(USBB1_ULPITLL_CLK),	IEN | OFF_WE | M1)		\
MV(CP(USBB1_ULPITLL_STP),	IEN | M1)				\
MV(CP(USBB1_ULPITLL_DIR),	IEN | M1)				\
MV(CP(USBB1_ULPITLL_NXT),	OFF_EN | OFF_IN | M1)			\
MV(CP(USBB1_ULPITLL_DAT0),	M1)						\
MV(CP(USBB1_ULPITLL_DAT1),	M1)						\
MV(CP(USBB1_ULPITLL_DAT2),	M1)						\
MV(CP(USBB1_ULPITLL_DAT3),	IEN | M1) 				\
	MV(CP(USBB1_ULPITLL_DAT4) , ( IEN | OFF_EN | OFF_PD | OFF_IN | M4))			\
	MV(CP(USBB1_ULPITLL_DAT5) , ( IEN | OFF_EN | OFF_PD | OFF_IN | M4))			\
	MV(CP(USBB1_ULPITLL_DAT6) , ( IEN | OFF_EN | OFF_PD | OFF_IN | M4))			\
	MV(CP(USBB1_ULPITLL_DAT7) , ( IEN | OFF_EN | OFF_PD | OFF_IN | M4))			\
MV(CP(USBB1_HSIC_DATA),		M7)			\
MV(CP(USBB1_HSIC_STROBE),	M7)			\
MV(CP(USBC1_ICUSB_DP),	PTU | OFF_EN | OFF_PU | OFF_OUT_PTU | M3)			\
MV(CP(USBC1_ICUSB_DM),	PTU | OFF_EN | OFF_PU | OFF_OUT_PTU | M3)			\
MV(CP(SDMMC1_CLK),		PTU | OFF_EN | OFF_OUT_PTD | M0)					\
MV(CP(SDMMC1_CMD),		PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)			\
MV(CP(SDMMC1_DAT0),		PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)			\
MV(CP(SDMMC1_DAT1),		PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)			\
MV(CP(SDMMC1_DAT2),		PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)			\
MV(CP(SDMMC1_DAT3),		PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)			\
MV(CP(SDMMC1_DAT4),		M7)			\
MV(CP(SDMMC1_DAT5),		M7)			\
MV(CP(SDMMC1_DAT6),		M7)			\
MV(CP(SDMMC1_DAT7),		M7)			\
	MV(CP(ABE_MCBSP2_CLKX),	IEN | OFF_EN | OFF_PD | OFF_IN | M0)		\
	MV(CP(ABE_MCBSP2_DR),	IEN | OFF_EN | OFF_OUT_PTD | M0)			\
	MV(CP(ABE_MCBSP2_DX),	OFF_EN | OFF_OUT_PTD | M0)					\
	MV(CP(ABE_MCBSP2_FSX),	IEN | OFF_EN | OFF_PD | OFF_IN | M0)		\
	MV(CP(ABE_MCBSP1_CLKX),	IEN | OFF_EN | OFF_PD | OFF_IN | M0)									\
	MV(CP(ABE_MCBSP1_DR),	IEN | OFF_EN | OFF_OUT_PTD | M0)									\
	MV(CP(ABE_MCBSP1_DX),	OFF_EN | OFF_OUT_PTD | M0)					\
	MV(CP(ABE_MCBSP1_FSX),	IEN | OFF_EN | OFF_PD | OFF_IN | M0)		\
MV(CP(ABE_PDM_UL_DATA),	PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M0)		\
MV(CP(ABE_PDM_DL_DATA),	PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M0)		\
MV(CP(ABE_PDM_FRAME),	PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)		\
MV(CP(ABE_PDM_LB_CLK),	PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M0)		\
MV(CP(ABE_CLKS),		PTD | IEN | OFF_EN | OFF_PD | OFF_IN | M0)		\
MV(CP(ABE_DMIC_CLK1),		IEN  | PTD | M7)				 \
MV(CP(ABE_DMIC_DIN1),		IEN  | PTD | M7)				 \
MV(CP(ABE_DMIC_DIN2),	OFF_EN | PTU | M3)		\
MV(CP(ABE_DMIC_DIN3),	PTD | M3)		\
MV(CP(UART2_CTS),		PTU | IEN | M0)									\
MV(CP(UART2_RTS),		M0)												\
MV(CP(UART2_RX),		PTU | IEN | M0)									\
MV(CP(UART2_TX),		M0)												\
MV(CP(HDQ_SIO),			M3)												\
MV(CP(I2C1_SCL),		PTU | IEN | EN | M0)  							\
MV(CP(I2C1_SDA),		PTU | IEN | EN | M0)  							\
MV(CP(I2C2_SCL),		PTU | IEN | EN | M0)  							\
MV(CP(I2C2_SDA),		PTU | IEN | EN | M0)  							\
MV(CP(I2C3_SCL),		PTU | IEN | EN | M0)  							\
MV(CP(I2C3_SDA),		PTU | IEN | EN | M0)  							\
MV(CP(I2C4_SCL),		PTU | IEN | EN | M0)  							\
MV(CP(I2C4_SDA),		PTU | IEN | EN | M0)  							\
MV(CP(MCSPI1_CLK),		M7)			\
MV(CP(MCSPI1_SOMI),		M7)			\
MV(CP(MCSPI1_SIMO),		M7)			\
MV(CP(MCSPI1_CS0),		M7)			\
MV(CP(MCSPI1_CS1),		PTU | IEN | M1)									\
MV(CP(MCSPI1_CS2),		M7)			\
MV(CP(MCSPI1_CS3),		PTD | 									M3)		\
MV(CP(UART3_CTS_RCTX) , M1)												\
MV(CP(UART3_RTS_SD),	M7)			\
MV(CP(UART3_RX_IRRX),	M1)												\
MV(CP(UART3_TX_IRTX),	PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)		\
MV(CP(SDMMC5_CLK),		PTU | IEN | OFF_EN | OFF_OUT_PTD | M0)			\
MV(CP(SDMMC5_CMD),		PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)  	\
MV(CP(SDMMC5_DAT0),		PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)  	\
MV(CP(SDMMC5_DAT1),		PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)  	\
MV(CP(SDMMC5_DAT2),		PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)  	\
MV(CP(SDMMC5_DAT3),		PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)  	\
MV(CP(MCSPI4_CLK),		IEN  | PTD | M7)					\
MV(CP(MCSPI4_SIMO),		IEN  | PTD | M7)					\
MV(CP(MCSPI4_SOMI),		IEN  | PTD | M7)					\
MV(CP(MCSPI4_CS0),		M7)			\
MV(CP(UART4_RX),		IEN | M0)										\
MV(CP(UART4_TX),		M0)												\
MV(CP(USBB2_ULPITLL_CLK),	M7)			\
MV(CP(USBB2_ULPITLL_STP),	M7)			\
MV(CP(USBB2_ULPITLL_DIR),	M7)			\
MV(CP(USBB2_ULPITLL_NXT),	M7)			\
MV(CP(USBB2_ULPITLL_DAT0),	M7)			\
MV(CP(USBB2_ULPITLL_DAT1),	M7)			\
MV(CP(USBB2_ULPITLL_DAT2),	M7)			\
MV(CP(USBB2_ULPITLL_DAT3),	PTU | M3)										\
	MV(CP(USBB2_ULPITLL_DAT4) , ( IEN | M5))   \
MV(CP(USBB2_ULPITLL_DAT5),	PTD | M3)										\
MV(CP(USBB2_ULPITLL_DAT6),	OFF_WE | PTD | IEN | M3)									\
MV(CP(USBB2_ULPITLL_DAT7),	PTD | M3)										\
MV(CP(USBB2_HSIC_DATA),		M7)			\
MV(CP(USBB2_HSIC_STROBE),	M7)			\
MV(CP(UNIPRO_TX0),		OFF_EN | OFF_PD | OFF_IN | M1)						\
MV(CP(UNIPRO_TY0),		OFF_EN | OFF_PD | OFF_IN | M1)						\
MV(CP(UNIPRO_TX1),		M7)   \
MV(CP(UNIPRO_TY1),		M7)   \
MV(CP(UNIPRO_TX2),		PTD	| OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV(CP(UNIPRO_TY2),		PTD	| OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV(CP(UNIPRO_RX0),		PTU	| IEN |	OFF_EN | OFF_PD | OFF_IN | M1)			\
MV(CP(UNIPRO_RY0),		PTU | IEN |	OFF_EN | OFF_PD | OFF_IN | M1)			\
MV(CP(UNIPRO_RX1),		M7)			\
MV(CP(UNIPRO_RY1),		M7)			\
MV(CP(UNIPRO_RX2),		M7)			\
MV(CP(UNIPRO_RY2),		M7)			\
MV(CP(USBA0_OTG_CE),	M7)			\
MV(CP(USBA0_OTG_DP),	IEN | OFF_EN | OFF_PD | OFF_IN | M0)				\
MV(CP(USBA0_OTG_DM),	IEN | OFF_EN | OFF_PD | OFF_IN | M0)				\
MV(CP(FREF_CLK1_OUT),	M0)													\
MV(CP(FREF_CLK2_OUT),	M7)		 \
MV(CP(SYS_NIRQ1),		OFF_WE | PTU | IEN | M0)										\
MV(CP(SYS_NIRQ2),		OFF_WE | PTU | IEN | M0)										\
MV(CP(SYS_BOOT0),		M7)		 \
MV(CP(SYS_BOOT1),		IEN | M3)											\
MV(CP(SYS_BOOT2),		IEN | M3)											\
MV(CP(SYS_BOOT3),		M7)		 \
MV(CP(SYS_BOOT4),		IEN | M3)											\
MV(CP(SYS_BOOT5),		M7)		 \
MV(CP(DPM_EMU0),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV(CP(DPM_EMU1),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV(CP(DPM_EMU2),		PTU | IEN	| M3	)			\
MV(CP(DPM_EMU3),		PTU | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV(CP(DPM_EMU4),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV(CP(DPM_EMU5),		PTU | IEN | OFF_WE | M3)								\
MV(CP(DPM_EMU6),		(PTU | M2)) 										\
MV(CP(DPM_EMU7),		(PTU | IEN | M2))									\
MV(CP(DPM_EMU8),		(PTD | M2))  										\
MV(CP(DPM_EMU9),		(PTD | IEN | M2))									\
MV(CP(DPM_EMU10),		M7)			\
MV(CP(DPM_EMU11),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV(CP(DPM_EMU12),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV(CP(DPM_EMU13),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV(CP(DPM_EMU14),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV(CP(DPM_EMU15),		PTD | IEN | M3)										\
MV(CP(DPM_EMU16),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV(CP(DPM_EMU17),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV(CP(DPM_EMU18),		M1)													\
MV(CP(DPM_EMU19),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)			\
MV1(WK(PAD0_SIM_IO),	M7)			\
MV1(WK(PAD1_SIM_CLK),			PTU | IEN | M3)									\
MV1(WK(PAD0_SIM_RESET),	M7)			\
MV1(WK(PAD1_SIM_CD),			PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)		\
MV1(WK(PAD0_SIM_PWRCTRL),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)		\
MV1(WK(PAD1_SR_SCL),			PTU | IEN | M0)  								\
MV1(WK(PAD0_SR_SDA),			PTU | IEN | M0)									\
MV1(WK(PAD1_FREF_XTAL_IN),		M7)			\
MV1(WK(PAD0_FREF_SLICER_IN),	M0)												\
MV1(WK(PAD1_FREF_CLK_IOREQ),	M0)												\
MV1(WK(PAD0_FREF_CLK0_OUT),		PTU | M3)												\
MV1(WK(PAD1_FREF_CLK3_REQ),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)		\
MV1(WK(PAD0_FREF_CLK3_OUT),		M0)												\
MV1(WK(PAD1_FREF_CLK4_REQ),		OFF_WE | PTU | IEN | M3)									\
MV1(WK(PAD0_FREF_CLK4_OUT),		M7)			\
MV1(WK(PAD1_SYS_32K),			IEN | M0)										\
MV1(WK(PAD0_SYS_NRESPWRON),		M0)												\
MV1(WK(PAD1_SYS_NRESWARM),		M0)												\
MV1(WK(PAD0_SYS_PWR_REQ),		PTU | M0)										\
MV1(WK(PAD1_SYS_PWRON_RESET),	PTU | IEN | M3)									\
MV1(WK(PAD0_SYS_BOOT6),			M7)		 \
MV1(WK(PAD1_SYS_BOOT7),			IEN | M3)									

#if	0

	MV1(WK(PAD1_JTAG_TCK) , ( IEN | M0))   \
	MV1(WK(PAD0_JTAG_RTCK) , ( M0))   \
	MV1(WK(PAD1_JTAG_TMS_TMSC) , ( IEN | M0))   \
	MV1(WK(PAD0_JTAG_TDI) , ( IEN | M0))   \
	MV1(WK(PAD1_JTAG_TDO) , ( M0))   
#endif
