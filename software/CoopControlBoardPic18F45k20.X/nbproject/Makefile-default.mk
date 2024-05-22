#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/CoopControlBoardPic18F45k20.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/CoopControlBoardPic18F45k20.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=source/driver/adc/src/adc.c source/driver/system/src/clock.c source/driver/system/src/config_bits.c source/driver/system/src/interrupt.c source/driver/system/src/pins.c source/driver/system/src/system.c source/driver/system/src/watchdog.c source/driver/timer/src/delay.c source/driver/timer/src/tmr0.c source/main.c source/remoteButton.c source/motor.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/source/driver/adc/src/adc.p1 ${OBJECTDIR}/source/driver/system/src/clock.p1 ${OBJECTDIR}/source/driver/system/src/config_bits.p1 ${OBJECTDIR}/source/driver/system/src/interrupt.p1 ${OBJECTDIR}/source/driver/system/src/pins.p1 ${OBJECTDIR}/source/driver/system/src/system.p1 ${OBJECTDIR}/source/driver/system/src/watchdog.p1 ${OBJECTDIR}/source/driver/timer/src/delay.p1 ${OBJECTDIR}/source/driver/timer/src/tmr0.p1 ${OBJECTDIR}/source/main.p1 ${OBJECTDIR}/source/remoteButton.p1 ${OBJECTDIR}/source/motor.p1
POSSIBLE_DEPFILES=${OBJECTDIR}/source/driver/adc/src/adc.p1.d ${OBJECTDIR}/source/driver/system/src/clock.p1.d ${OBJECTDIR}/source/driver/system/src/config_bits.p1.d ${OBJECTDIR}/source/driver/system/src/interrupt.p1.d ${OBJECTDIR}/source/driver/system/src/pins.p1.d ${OBJECTDIR}/source/driver/system/src/system.p1.d ${OBJECTDIR}/source/driver/system/src/watchdog.p1.d ${OBJECTDIR}/source/driver/timer/src/delay.p1.d ${OBJECTDIR}/source/driver/timer/src/tmr0.p1.d ${OBJECTDIR}/source/main.p1.d ${OBJECTDIR}/source/remoteButton.p1.d ${OBJECTDIR}/source/motor.p1.d

# Object Files
OBJECTFILES=${OBJECTDIR}/source/driver/adc/src/adc.p1 ${OBJECTDIR}/source/driver/system/src/clock.p1 ${OBJECTDIR}/source/driver/system/src/config_bits.p1 ${OBJECTDIR}/source/driver/system/src/interrupt.p1 ${OBJECTDIR}/source/driver/system/src/pins.p1 ${OBJECTDIR}/source/driver/system/src/system.p1 ${OBJECTDIR}/source/driver/system/src/watchdog.p1 ${OBJECTDIR}/source/driver/timer/src/delay.p1 ${OBJECTDIR}/source/driver/timer/src/tmr0.p1 ${OBJECTDIR}/source/main.p1 ${OBJECTDIR}/source/remoteButton.p1 ${OBJECTDIR}/source/motor.p1

# Source Files
SOURCEFILES=source/driver/adc/src/adc.c source/driver/system/src/clock.c source/driver/system/src/config_bits.c source/driver/system/src/interrupt.c source/driver/system/src/pins.c source/driver/system/src/system.c source/driver/system/src/watchdog.c source/driver/timer/src/delay.c source/driver/timer/src/tmr0.c source/main.c source/remoteButton.c source/motor.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/CoopControlBoardPic18F45k20.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=18F45K20
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/source/driver/adc/src/adc.p1: source/driver/adc/src/adc.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/adc/src" 
	@${RM} ${OBJECTDIR}/source/driver/adc/src/adc.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/adc/src/adc.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=pickit3   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/adc/src/adc.p1 source/driver/adc/src/adc.c 
	@-${MV} ${OBJECTDIR}/source/driver/adc/src/adc.d ${OBJECTDIR}/source/driver/adc/src/adc.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/adc/src/adc.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/system/src/clock.p1: source/driver/system/src/clock.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/system/src" 
	@${RM} ${OBJECTDIR}/source/driver/system/src/clock.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/system/src/clock.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=pickit3   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/system/src/clock.p1 source/driver/system/src/clock.c 
	@-${MV} ${OBJECTDIR}/source/driver/system/src/clock.d ${OBJECTDIR}/source/driver/system/src/clock.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/system/src/clock.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/system/src/config_bits.p1: source/driver/system/src/config_bits.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/system/src" 
	@${RM} ${OBJECTDIR}/source/driver/system/src/config_bits.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/system/src/config_bits.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=pickit3   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/system/src/config_bits.p1 source/driver/system/src/config_bits.c 
	@-${MV} ${OBJECTDIR}/source/driver/system/src/config_bits.d ${OBJECTDIR}/source/driver/system/src/config_bits.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/system/src/config_bits.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/system/src/interrupt.p1: source/driver/system/src/interrupt.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/system/src" 
	@${RM} ${OBJECTDIR}/source/driver/system/src/interrupt.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/system/src/interrupt.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=pickit3   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/system/src/interrupt.p1 source/driver/system/src/interrupt.c 
	@-${MV} ${OBJECTDIR}/source/driver/system/src/interrupt.d ${OBJECTDIR}/source/driver/system/src/interrupt.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/system/src/interrupt.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/system/src/pins.p1: source/driver/system/src/pins.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/system/src" 
	@${RM} ${OBJECTDIR}/source/driver/system/src/pins.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/system/src/pins.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=pickit3   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/system/src/pins.p1 source/driver/system/src/pins.c 
	@-${MV} ${OBJECTDIR}/source/driver/system/src/pins.d ${OBJECTDIR}/source/driver/system/src/pins.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/system/src/pins.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/system/src/system.p1: source/driver/system/src/system.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/system/src" 
	@${RM} ${OBJECTDIR}/source/driver/system/src/system.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/system/src/system.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=pickit3   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/system/src/system.p1 source/driver/system/src/system.c 
	@-${MV} ${OBJECTDIR}/source/driver/system/src/system.d ${OBJECTDIR}/source/driver/system/src/system.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/system/src/system.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/system/src/watchdog.p1: source/driver/system/src/watchdog.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/system/src" 
	@${RM} ${OBJECTDIR}/source/driver/system/src/watchdog.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/system/src/watchdog.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=pickit3   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/system/src/watchdog.p1 source/driver/system/src/watchdog.c 
	@-${MV} ${OBJECTDIR}/source/driver/system/src/watchdog.d ${OBJECTDIR}/source/driver/system/src/watchdog.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/system/src/watchdog.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/timer/src/delay.p1: source/driver/timer/src/delay.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/timer/src" 
	@${RM} ${OBJECTDIR}/source/driver/timer/src/delay.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/timer/src/delay.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=pickit3   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/timer/src/delay.p1 source/driver/timer/src/delay.c 
	@-${MV} ${OBJECTDIR}/source/driver/timer/src/delay.d ${OBJECTDIR}/source/driver/timer/src/delay.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/timer/src/delay.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/timer/src/tmr0.p1: source/driver/timer/src/tmr0.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/timer/src" 
	@${RM} ${OBJECTDIR}/source/driver/timer/src/tmr0.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/timer/src/tmr0.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=pickit3   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/timer/src/tmr0.p1 source/driver/timer/src/tmr0.c 
	@-${MV} ${OBJECTDIR}/source/driver/timer/src/tmr0.d ${OBJECTDIR}/source/driver/timer/src/tmr0.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/timer/src/tmr0.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/main.p1: source/main.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source" 
	@${RM} ${OBJECTDIR}/source/main.p1.d 
	@${RM} ${OBJECTDIR}/source/main.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=pickit3   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/main.p1 source/main.c 
	@-${MV} ${OBJECTDIR}/source/main.d ${OBJECTDIR}/source/main.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/main.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/remoteButton.p1: source/remoteButton.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source" 
	@${RM} ${OBJECTDIR}/source/remoteButton.p1.d 
	@${RM} ${OBJECTDIR}/source/remoteButton.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=pickit3   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/remoteButton.p1 source/remoteButton.c 
	@-${MV} ${OBJECTDIR}/source/remoteButton.d ${OBJECTDIR}/source/remoteButton.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/remoteButton.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/motor.p1: source/motor.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source" 
	@${RM} ${OBJECTDIR}/source/motor.p1.d 
	@${RM} ${OBJECTDIR}/source/motor.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=pickit3   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/motor.p1 source/motor.c 
	@-${MV} ${OBJECTDIR}/source/motor.d ${OBJECTDIR}/source/motor.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/motor.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
else
${OBJECTDIR}/source/driver/adc/src/adc.p1: source/driver/adc/src/adc.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/adc/src" 
	@${RM} ${OBJECTDIR}/source/driver/adc/src/adc.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/adc/src/adc.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/adc/src/adc.p1 source/driver/adc/src/adc.c 
	@-${MV} ${OBJECTDIR}/source/driver/adc/src/adc.d ${OBJECTDIR}/source/driver/adc/src/adc.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/adc/src/adc.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/system/src/clock.p1: source/driver/system/src/clock.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/system/src" 
	@${RM} ${OBJECTDIR}/source/driver/system/src/clock.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/system/src/clock.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/system/src/clock.p1 source/driver/system/src/clock.c 
	@-${MV} ${OBJECTDIR}/source/driver/system/src/clock.d ${OBJECTDIR}/source/driver/system/src/clock.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/system/src/clock.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/system/src/config_bits.p1: source/driver/system/src/config_bits.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/system/src" 
	@${RM} ${OBJECTDIR}/source/driver/system/src/config_bits.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/system/src/config_bits.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/system/src/config_bits.p1 source/driver/system/src/config_bits.c 
	@-${MV} ${OBJECTDIR}/source/driver/system/src/config_bits.d ${OBJECTDIR}/source/driver/system/src/config_bits.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/system/src/config_bits.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/system/src/interrupt.p1: source/driver/system/src/interrupt.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/system/src" 
	@${RM} ${OBJECTDIR}/source/driver/system/src/interrupt.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/system/src/interrupt.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/system/src/interrupt.p1 source/driver/system/src/interrupt.c 
	@-${MV} ${OBJECTDIR}/source/driver/system/src/interrupt.d ${OBJECTDIR}/source/driver/system/src/interrupt.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/system/src/interrupt.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/system/src/pins.p1: source/driver/system/src/pins.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/system/src" 
	@${RM} ${OBJECTDIR}/source/driver/system/src/pins.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/system/src/pins.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/system/src/pins.p1 source/driver/system/src/pins.c 
	@-${MV} ${OBJECTDIR}/source/driver/system/src/pins.d ${OBJECTDIR}/source/driver/system/src/pins.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/system/src/pins.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/system/src/system.p1: source/driver/system/src/system.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/system/src" 
	@${RM} ${OBJECTDIR}/source/driver/system/src/system.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/system/src/system.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/system/src/system.p1 source/driver/system/src/system.c 
	@-${MV} ${OBJECTDIR}/source/driver/system/src/system.d ${OBJECTDIR}/source/driver/system/src/system.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/system/src/system.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/system/src/watchdog.p1: source/driver/system/src/watchdog.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/system/src" 
	@${RM} ${OBJECTDIR}/source/driver/system/src/watchdog.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/system/src/watchdog.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/system/src/watchdog.p1 source/driver/system/src/watchdog.c 
	@-${MV} ${OBJECTDIR}/source/driver/system/src/watchdog.d ${OBJECTDIR}/source/driver/system/src/watchdog.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/system/src/watchdog.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/timer/src/delay.p1: source/driver/timer/src/delay.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/timer/src" 
	@${RM} ${OBJECTDIR}/source/driver/timer/src/delay.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/timer/src/delay.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/timer/src/delay.p1 source/driver/timer/src/delay.c 
	@-${MV} ${OBJECTDIR}/source/driver/timer/src/delay.d ${OBJECTDIR}/source/driver/timer/src/delay.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/timer/src/delay.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/driver/timer/src/tmr0.p1: source/driver/timer/src/tmr0.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source/driver/timer/src" 
	@${RM} ${OBJECTDIR}/source/driver/timer/src/tmr0.p1.d 
	@${RM} ${OBJECTDIR}/source/driver/timer/src/tmr0.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/driver/timer/src/tmr0.p1 source/driver/timer/src/tmr0.c 
	@-${MV} ${OBJECTDIR}/source/driver/timer/src/tmr0.d ${OBJECTDIR}/source/driver/timer/src/tmr0.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/driver/timer/src/tmr0.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/main.p1: source/main.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source" 
	@${RM} ${OBJECTDIR}/source/main.p1.d 
	@${RM} ${OBJECTDIR}/source/main.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/main.p1 source/main.c 
	@-${MV} ${OBJECTDIR}/source/main.d ${OBJECTDIR}/source/main.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/main.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/remoteButton.p1: source/remoteButton.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source" 
	@${RM} ${OBJECTDIR}/source/remoteButton.p1.d 
	@${RM} ${OBJECTDIR}/source/remoteButton.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/remoteButton.p1 source/remoteButton.c 
	@-${MV} ${OBJECTDIR}/source/remoteButton.d ${OBJECTDIR}/source/remoteButton.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/remoteButton.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/source/motor.p1: source/motor.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/source" 
	@${RM} ${OBJECTDIR}/source/motor.p1.d 
	@${RM} ${OBJECTDIR}/source/motor.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/source/motor.p1 source/motor.c 
	@-${MV} ${OBJECTDIR}/source/motor.d ${OBJECTDIR}/source/motor.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/source/motor.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/CoopControlBoardPic18F45k20.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/CoopControlBoardPic18F45k20.X.${IMAGE_TYPE}.map  -D__DEBUG=1  -mdebugger=pickit3  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     -mrom=default,-7dc0-7fff -mram=default,-5f4-5ff,-f9c-f9c,-fd4-fd4,-fdb-fdf,-fe3-fe7,-feb-fef,-ffd-fff  $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/CoopControlBoardPic18F45k20.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	@${RM} ${DISTDIR}/CoopControlBoardPic18F45k20.X.${IMAGE_TYPE}.hex 
	
	
else
${DISTDIR}/CoopControlBoardPic18F45k20.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/CoopControlBoardPic18F45k20.X.${IMAGE_TYPE}.map  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits -std=c99 -gdwarf-3 -mstack=compiled:auto:auto:auto     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/CoopControlBoardPic18F45k20.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(wildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
