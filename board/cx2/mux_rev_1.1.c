#define MUX_DEFAULT_OMAP4() \MV(CP(GPMC_AD0),		OFF_PU | OFF_IN | OFF_EN | IEN | PTU | M1)		\MV(CP(GPMC_AD1),		OFF_PU | OFF_IN | OFF_EN | IEN | PTU | M1)		\MV(CP(GPMC_AD2),		OFF_PU | OFF_IN | OFF_EN | IEN | PTU | M1)		\MV(CP(GPMC_AD3),		OFF_PU | OFF_IN | OFF_EN | IEN | PTU | M1)		\MV(CP(GPMC_AD4),		OFF_PU | OFF_IN | OFF_EN | IEN | PTU | M1)		\MV(CP(GPMC_AD5),		OFF_PU | OFF_IN | OFF_EN | IEN | PTU | M1)		\MV(CP(GPMC_AD6),		OFF_PU | OFF_IN | OFF_EN | IEN | PTU | M1)		\MV(CP(GPMC_AD7),		OFF_PU | OFF_IN | OFF_EN | IEN | PTU | M1)		\MV(CP(GPMC_AD8),		IEN | PTD | M0)								\MV(CP(GPMC_AD9),		IEN | PTD | M0)								\MV(CP(GPMC_AD10),		IEN | PTD | M0)								\MV(CP(GPMC_AD11),		IEN | PTD | M0)								\MV(CP(GPMC_AD12),		IEN | PTD | M0)								\MV(CP(GPMC_AD13),		IEN | PTD | M0)								\MV(CP(GPMC_AD14),		IEN | PTD | M0)								\MV(CP(GPMC_AD15),		IEN | PTD | M0)								\MV(CP(GPMC_A16),		OFF_PU | OFF_IN | OFF_EN | IEN | M3)			\MV(CP(GPMC_A17),		M3)							\MV(CP(GPMC_A18),		OFF_PU | OFF_IN | OFF_EN | IEN | M3)			\MV(CP(GPMC_A19),		M3)						 	\MV(CP(GPMC_A20),		IEN  | PTD | M7)  							\MV(CP(GPMC_A21),		IEN  | PTD | M7)  							\MV(CP(GPMC_A22),		IEN  | PTD | M7)  							\MV(CP(GPMC_A23),		IEN  | PTD | M7)  							\MV(CP(GPMC_A24),		IEN  | PTD | M7)  							\MV(CP(GPMC_A25),		IEN  | PTD | M7)  							\MV(CP(GPMC_NCS0),		M0)  									\MV(CP(GPMC_NCS1),		OFF_PU | OFF_IN | OFF_EN | IEN | M3)			\MV(CP(GPMC_NCS2),		OFF_WE | OFF_PU | PTU | OFF_IN | OFF_EN | IEN | M3)			\MV(CP(GPMC_NCS3),		IEN  | PTD | M7)  							\MV(CP(GPMC_NWP),		IEN  | PTD | M7)  							\MV(CP(GPMC_CLK),		M3)  						 	\MV(CP(GPMC_NADV_ALE),		M0)									\MV(CP(GPMC_NOE),		PTU | IEN | OFF_EN | OFF_OUT_PTD | M1)		 	\MV(CP(GPMC_NWE),		PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M1)	 	\MV(CP(GPMC_NBE0_CLE),		M0)									\MV(CP(GPMC_NBE1),		PTU | IEN | M3)						\MV(CP(GPMC_WAIT0),		IEN | PTD | M0)								\MV(CP(GPMC_WAIT1),		IEN  | PTD | M7)							\MV(CP(C2C_DATA11),		IEN  | PTD | M7)							\MV(CP(C2C_DATA12),		IEN  | PTD | M7)							\MV(CP(C2C_DATA13),		IEN  | PTD | M7)							\MV(CP(C2C_DATA14),		M3)							\MV(CP(C2C_DATA15),		M3)							\MV(CP(HDMI_HPD),		M0)								\MV(CP(HDMI_CEC),		M0)								\MV(CP(HDMI_DDC_SCL),		PTU | M0)							\MV(CP(HDMI_DDC_SDA),		PTU | IEN | M0)							\MV(CP(CSI21_DX0),		IEN | M0)						\MV(CP(CSI21_DY0),		IEN | M0)						\MV(CP(CSI21_DX1),		IEN | M0)						\MV(CP(CSI21_DY1),		IEN | M0)						\MV(CP(CSI21_DX2),		IEN | M0)						\MV(CP(CSI21_DY2),		IEN | M0)						\MV(CP(CSI21_DX3),		PTD | M0)						\MV(CP(CSI21_DY3),		PTD | M0)						\MV(CP(CSI21_DX4),		IEN | M0)						\MV(CP(CSI21_DY4),		IEN | M0)						\MV(CP(CSI22_DX0),		IEN | M0)						\MV(CP(CSI22_DY0),		IEN | M0)						\MV(CP(CSI22_DX1),		IEN | M0)						\MV(CP(CSI22_DY1),		IEN | M0)						\MV(CP(CAM_SHUTTER),		IEN  | PTD | M7)							\MV(CP(CAM_STROBE),		M3)							\MV(CP(CAM_GLOBALRESET),		M3)							\MV(CP(USBB1_ULPITLL_CLK),	M7)								\MV(CP(USBB1_ULPITLL_STP),	M7)								\MV(CP(USBB1_ULPITLL_DIR),	M7)								\MV(CP(USBB1_ULPITLL_NXT),	M7)								\MV(CP(USBB1_ULPITLL_DAT0),	IEN | M3)						\MV(CP(USBB1_ULPITLL_DAT1),	M7)						 	\MV(CP(USBB1_ULPITLL_DAT2),	M7)							\MV(CP(USBB1_ULPITLL_DAT3),	M7)							\MV(CP(USBB1_ULPITLL_DAT4),	M2)							\MV(CP(USBB1_ULPITLL_DAT5),	M2)							\MV(CP(USBB1_ULPITLL_DAT6),	M2)							\MV(CP(USBB1_ULPITLL_DAT7),	M2)							\MV(CP(USBB1_HSIC_DATA),		IEN | PTD | M7)								\MV(CP(USBB1_HSIC_STROBE),	IEN | PTD | M7)								\MV1(WK(PAD0_SIM_IO),		IEN | PTD | M7)								\MV1(WK(PAD1_SIM_CLK),		IEN | PTD | M7)								\MV1(WK(PAD0_SIM_RESET),		IEN | PTD | M7)								\MV1(WK(PAD1_SIM_CD),		M3)							\MV1(WK(PAD0_SIM_PWRCTRL),	IEN  | PTD | M7)							\MV(CP(USBC1_ICUSB_DP),		M3)								\MV(CP(USBC1_ICUSB_DM),		PTU | M3)							\MV(CP(SDMMC1_CLK),		PTU | OFF_EN | OFF_OUT_PTU | M0)			\MV(CP(SDMMC1_CMD),		PTU | IEN | OFF_EN | OFF_PU | OFF_IN | M0)		\MV(CP(SDMMC1_DAT0),		PTU | IEN | OFF_EN | OFF_PU | OFF_IN | M0)		\MV(CP(SDMMC1_DAT1),		PTU | IEN | OFF_EN | OFF_PU | OFF_IN | M0)		\MV(CP(SDMMC1_DAT2),		PTU | IEN | OFF_EN | OFF_PU | OFF_IN | M0)		\MV(CP(SDMMC1_DAT3),		PTU | IEN | OFF_EN | OFF_PU | OFF_IN | M0)		\MV(CP(SDMMC1_DAT4),		IEN  | PTD | M7)							\MV(CP(SDMMC1_DAT5),		IEN  | PTD | M7)							\MV(CP(SDMMC1_DAT6),		IEN  | PTD | M7)							\MV(CP(SDMMC1_DAT7),		IEN  | PTD | M7)							\MV(CP(ABE_MCBSP2_CLKX),		OFF_EN | OFF_PD | OFF_IN | IEN | M0)			\MV(CP(ABE_MCBSP2_DR),		OFF_EN | OFF_OUT_PTD | IEN | M0)			\MV(CP(ABE_MCBSP2_DX),		OFF_EN | OFF_OUT_PTD | M0)				\MV(CP(ABE_MCBSP2_FSX),		OFF_EN | OFF_PD | OFF_IN | IEN | M0)			\MV(CP(ABE_MCBSP1_CLKX),		OFF_EN | OFF_PD | OFF_IN | IEN | M0)			\MV(CP(ABE_MCBSP1_DR),		OFF_EN | OFF_OUT_PTD | IEN | M0)			\MV(CP(ABE_MCBSP1_DX),		OFF_EN | OFF_OUT_PTD | M0)				\MV(CP(ABE_MCBSP1_FSX),		OFF_EN | OFF_PD | OFF_IN | IEN | M0)			\MV(CP(ABE_PDM_UL_DATA),		OFF_EN | OFF_PD | OFF_IN | PTD | IEN | M0)		\MV(CP(ABE_PDM_DL_DATA),		OFF_EN | OFF_PD | OFF_IN | PTD | IEN | M0)		\MV(CP(ABE_PDM_FRAME),		OFF_EN | OFF_PD | OFF_IN | PTU | IEN | M0)		\MV(CP(ABE_PDM_LB_CLK),		OFF_EN | OFF_PD | OFF_IN | PTD | IEN | M0)	 \MV(CP(ABE_CLKS),		OFF_EN | OFF_PD | OFF_IN | PTD | IEN | M0)	 \MV(CP(ABE_DMIC_CLK1),		IEN | PTD | M3)					 \MV(CP(ABE_DMIC_DIN1),		M3)						 \MV(CP(ABE_DMIC_DIN2),		OFF_EN | PTU | M3)				 \MV(CP(ABE_DMIC_DIN3),		PTD | M3)					 \MV(CP(UART2_CTS),		PTU | IEN | M0)					 	\MV(CP(UART2_RTS),		M0)							\MV(CP(UART2_RX),		PTU | IEN | M0)						\MV(CP(UART2_TX),		M0)							\MV(CP(HDQ_SIO),			M3)								\MV(CP(I2C1_SCL),		PTU | IEN | M0)  						\MV(CP(I2C1_SDA),		PTU | IEN | M0)  						\MV(CP(I2C2_SCL),		PTU | IEN | M0)  						\MV(CP(I2C2_SDA),		PTU | IEN | M0)  						\MV(CP(I2C3_SCL),		PTU | IEN | M0)  						\MV(CP(I2C3_SDA),		PTU | IEN | M0)  						\MV(CP(I2C4_SCL),		PTU | IEN | M0)  						\MV(CP(I2C4_SDA),		PTU | IEN | M0)  						\MV1(WK(PAD1_SR_SCL),		PTU | IEN | M0)  						\MV1(WK(PAD0_SR_SDA),		PTU | IEN | M0)							\MV(CP(MCSPI1_CLK),		IEN  | PTD | M7)							\MV(CP(MCSPI1_SOMI),		IEN  | PTD | M7)							\MV(CP(MCSPI1_SIMO),		IEN  | PTD | M7)							\MV(CP(MCSPI1_CS0),		IEN  | PTD | M7)							\MV(CP(MCSPI1_CS1),		PTU | IEN | M1)						\MV(CP(MCSPI1_CS2),		IEN  | PTD | M7)							\MV(CP(MCSPI1_CS3),		M3)							\MV(CP(UART3_CTS_RCTX),		M1)							\MV(CP(UART3_RTS_SD),		IEN  | PTD | M7)							\MV(CP(UART3_RX_IRRX),		M1)								\MV(CP(UART3_TX_IRTX),		M3)								\MV(CP(SDMMC5_CLK),		OFF_EN | OFF_OUT_PTU | IEN | PTU | M0)				\MV(CP(SDMMC5_CMD),		OFF_EN | OFF_PU | OFF_IN | IEN | PTU | M0)  			\MV(CP(SDMMC5_DAT0),		OFF_EN | OFF_PU | OFF_IN | IEN | PTU | M0)  		\MV(CP(SDMMC5_DAT1),		OFF_EN | OFF_PU | OFF_IN | IEN | PTU | M0)  		\MV(CP(SDMMC5_DAT2),		OFF_EN | OFF_PU | OFF_IN | IEN | PTU | M0)  		\MV(CP(SDMMC5_DAT3),		OFF_EN | OFF_PU | OFF_IN | IEN | PTU | M0)  		\MV(CP(MCSPI4_CLK),		OFF_EN | OFF_PD | OFF_IN | IEN | M0)				\MV(CP(MCSPI4_SIMO),		OFF_EN | OFF_PD | OFF_IN | IEN | M0)			\MV(CP(MCSPI4_SOMI),		OFF_EN | OFF_PD | OFF_IN | IEN | M0)			\MV(CP(MCSPI4_CS0),		IEN  | PTD | M7)							\MV(CP(UART4_RX),		IEN | PTU | M0)						\MV(CP(UART4_TX),		PTU |M0)							\MV(CP(USBB2_ULPITLL_CLK),	IEN  | PTU | M3)							\MV(CP(USBB2_ULPITLL_STP),	IEN  | PTD | M7)							\MV(CP(USBB2_ULPITLL_DIR),	IEN  | PTD | M7)							\MV(CP(USBB2_ULPITLL_NXT),	IEN  | PTD | M7)							\MV(CP(USBB2_ULPITLL_DAT0),	IEN  | PTD | M7)							\MV(CP(USBB2_ULPITLL_DAT1),	IEN  | PTD | M7)							\MV(CP(USBB2_ULPITLL_DAT2),	IEN  | PTU | M3)				 			\MV(CP(USBB2_ULPITLL_DAT3),	M3)							\MV(CP(USBB2_ULPITLL_DAT4),	M3)  								\MV(CP(USBB2_ULPITLL_DAT5),	M3)								\MV(CP(USBB2_ULPITLL_DAT6),	OFF_WE | PTD | IEN | M3)				\MV(CP(USBB2_ULPITLL_DAT7),	M3)								\MV(CP(USBB2_HSIC_DATA),		M7)									\MV(CP(USBB2_HSIC_STROBE),	M7)									\MV(CP(UNIPRO_TX0),		OFF_PD | OFF_IN | M1)					\MV(CP(UNIPRO_TY0),		OFF_PD | OFF_IN | M1)					\MV(CP(UNIPRO_TX1),		IEN  | PTD | M7)							\MV(CP(UNIPRO_TY1),		IEN  | PTD | M7)							\MV(CP(UNIPRO_TX2),		M3)							\MV(CP(UNIPRO_TY2),		M3)							\MV(CP(UNIPRO_RX0),		PTU | IEN | M1)						\MV(CP(UNIPRO_RY0),		PTU | IEN | M1)						\MV(CP(UNIPRO_RX1),		IEN  | PTD | M7)							\MV(CP(UNIPRO_RY1),		IEN  | PTD | M7)							\MV(CP(UNIPRO_RX2),		IEN  | PTD | M7)							\MV(CP(UNIPRO_RY2),		IEN  | PTD | M7)							\MV(CP(USBA0_OTG_CE),		M7)									\MV(CP(USBA0_OTG_DP),		IEN | OFF_EN | OFF_PD | OFF_IN | M0)			\MV(CP(USBA0_OTG_DM),		IEN | OFF_EN | OFF_PD | OFF_IN | M0)			\MV1(WK(PAD1_FREF_XTAL_IN),	M0)									\MV1(WK(PAD0_FREF_SLICER_IN),	M0)							\MV1(WK(PAD1_FREF_CLK_IOREQ),	M0)							\MV1(WK(PAD0_FREF_CLK0_OUT),	PTU | M3)						\MV(CP(FREF_CLK1_OUT),		M0)								\MV(CP(FREF_CLK2_OUT),		IEN  | PTD | M7)							\MV1(WK(PAD1_FREF_CLK3_REQ),	PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)		\MV1(WK(PAD0_FREF_CLK3_OUT),	M0)							\MV1(WK(PAD1_FREF_CLK4_REQ),	OFF_WE | OFF_PU | OFF_IN | OFF_EN | IEN | M3)			\MV1(WK(PAD0_FREF_CLK4_OUT),	M0)								\MV1(WK(PAD1_SYS_32K),		IEN | M0)							\MV1(WK(PAD0_SYS_NRESPWRON),	M0)							\MV1(WK(PAD1_SYS_NRESWARM),	M0)							\MV1(WK(PAD0_SYS_PWR_REQ),	PTU | M0)						\MV1(WK(PAD1_SYS_PWRON_RESET),	OFF_PU | OFF_IN | OFF_EN | IEN | M3)			\MV(CP(SYS_NIRQ1),		OFF_WE | PTU | IEN | M0)					\MV(CP(SYS_NIRQ2),		OFF_WE | PTU | IEN | M0)					\MV(CP(SYS_BOOT0),		IEN  | PTD | M7)							\MV(CP(SYS_BOOT1),		OFF_PU | OFF_IN | OFF_EN | IEN | M3)				\MV(CP(SYS_BOOT2),		OFF_PU | OFF_IN | OFF_EN | IEN | M3)				\MV(CP(SYS_BOOT3),		IEN  | PTD | M7)							\MV(CP(SYS_BOOT4),		OFF_PU | OFF_IN | OFF_EN | IEN | M3)				\MV(CP(SYS_BOOT5),		IEN  | PTD | M7)							\MV1(WK(PAD0_SYS_BOOT6),		OFF_PD | OFF_IN | OFF_EN | M7)			 		\MV1(WK(PAD1_SYS_BOOT7),		OFF_PU | OFF_IN | OFF_EN | IEN | M3)				\MV(CP(DPM_EMU0),		M3)								\MV(CP(DPM_EMU1),		M3)								\MV(CP(DPM_EMU2),		IEN  | PTD | M7)							\MV(CP(DPM_EMU3),		M3)							\MV(CP(DPM_EMU4),		M3)							\MV(CP(DPM_EMU5),		OFF_WE | OFF_PU | OFF_IN | OFF_EN | IEN | M3)		\MV(CP(DPM_EMU6),		PTU | M2) 						\MV(CP(DPM_EMU7),		PTU | IEN | M2)						\MV(CP(DPM_EMU8),		PTD | M2)  						\MV(CP(DPM_EMU9),		PTD | IEN | M2)						\MV(CP(DPM_EMU10),		OFF_WE | IEN  | PTU | M3)				 			\MV(CP(DPM_EMU11),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)		\MV(CP(DPM_EMU12),		PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)		\MV(CP(DPM_EMU13),		M3)							\MV(CP(DPM_EMU14),		M3)								\MV(CP(DPM_EMU15),		OFF_WE | PTD | IEN | M3)				\MV(CP(DPM_EMU16),		M3)								\MV(CP(DPM_EMU17),		OFF_EN | OFF_PD | OFF_OUT_PTD | IEN | M3)			\MV(CP(DPM_EMU18),		M1)							\MV(CP(DPM_EMU19),		M3)								\#if	0	MV1(WK(PAD1_JTAG_TCK) , ( IEN | M0))   \	MV1(WK(PAD0_JTAG_RTCK) , ( M0))   \	MV1(WK(PAD1_JTAG_TMS_TMSC) , ( IEN | M0))   \	MV1(WK(PAD0_JTAG_TDI) , ( IEN | M0))   \	MV1(WK(PAD1_JTAG_TDO) , ( M0))  #endif