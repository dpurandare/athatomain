#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/analysis/Analyzer.o \
	${OBJECTDIR}/analysis/pugixml.o \
	${OBJECTDIR}/ast/CobCommunicationSection.o \
	${OBJECTDIR}/ast/CobConfigurationSection.o \
	${OBJECTDIR}/ast/CobDataDivision.o \
	${OBJECTDIR}/ast/CobDeclaratives.o \
	${OBJECTDIR}/ast/CobEnvironmentDivision.o \
	${OBJECTDIR}/ast/CobFieldRecord.o \
	${OBJECTDIR}/ast/CobFieldRecordList.o \
	${OBJECTDIR}/ast/CobFile.o \
	${OBJECTDIR}/ast/CobFileControl.o \
	${OBJECTDIR}/ast/CobFileDescription.o \
	${OBJECTDIR}/ast/CobFileSection.o \
	${OBJECTDIR}/ast/CobFunctionDivision.o \
	${OBJECTDIR}/ast/CobIOControl.o \
	${OBJECTDIR}/ast/CobIdentificationDivision.o \
	${OBJECTDIR}/ast/CobInputOutputSection.o \
	${OBJECTDIR}/ast/CobLinkageSection.o \
	${OBJECTDIR}/ast/CobLocalStorageSection.o \
	${OBJECTDIR}/ast/CobObject.o \
	${OBJECTDIR}/ast/CobProcedureDivision.o \
	${OBJECTDIR}/ast/CobProject.o \
	${OBJECTDIR}/ast/CobScreenSection.o \
	${OBJECTDIR}/ast/CobSortMergeFileControl.o \
	${OBJECTDIR}/ast/CobWorkingStorageSection.o \
	${OBJECTDIR}/ast/RecordKey.o \
	${OBJECTDIR}/cobmain.o \
	${OBJECTDIR}/global.o \
	${OBJECTDIR}/jgen/JBuildFileGenerator.o \
	${OBJECTDIR}/jgen/JGenConfig.o \
	${OBJECTDIR}/jgen/JGenerator.o \
	${OBJECTDIR}/jgen/JGeneratorEnvironment.o \
	${OBJECTDIR}/jgen/JMetaClass.o \
	${OBJECTDIR}/jgen/JMetaField.o \
	${OBJECTDIR}/jgen/JMetaMethod.o \
	${OBJECTDIR}/jgen/jcommon.o \
	${OBJECTDIR}/lex.yy.o \
	${OBJECTDIR}/proc/CobParagraphDeclaration.o \
	${OBJECTDIR}/proc/CobProcDivItem.o \
	${OBJECTDIR}/proc/CobSectionDeclaration.o \
	${OBJECTDIR}/proc/CobSentence.o \
	${OBJECTDIR}/proc/CobStmtAccept.o \
	${OBJECTDIR}/proc/CobStmtAdd.o \
	${OBJECTDIR}/proc/CobStmtAlter.o \
	${OBJECTDIR}/proc/CobStmtCall.o \
	${OBJECTDIR}/proc/CobStmtCancel.o \
	${OBJECTDIR}/proc/CobStmtClose.o \
	${OBJECTDIR}/proc/CobStmtCompute.o \
	${OBJECTDIR}/proc/CobStmtContinue.o \
	${OBJECTDIR}/proc/CobStmtDelete.o \
	${OBJECTDIR}/proc/CobStmtDisplay.o \
	${OBJECTDIR}/proc/CobStmtDivide.o \
	${OBJECTDIR}/proc/CobStmtEvaluate.o \
	${OBJECTDIR}/proc/CobStmtExit.o \
	${OBJECTDIR}/proc/CobStmtGenerate.o \
	${OBJECTDIR}/proc/CobStmtGoback.o \
	${OBJECTDIR}/proc/CobStmtGoto.o \
	${OBJECTDIR}/proc/CobStmtIfElse.o \
	${OBJECTDIR}/proc/CobStmtInitialize.o \
	${OBJECTDIR}/proc/CobStmtInitiate.o \
	${OBJECTDIR}/proc/CobStmtInspect.o \
	${OBJECTDIR}/proc/CobStmtMerge.o \
	${OBJECTDIR}/proc/CobStmtMove.o \
	${OBJECTDIR}/proc/CobStmtMultiply.o \
	${OBJECTDIR}/proc/CobStmtOpen.o \
	${OBJECTDIR}/proc/CobStmtPerform.o \
	${OBJECTDIR}/proc/CobStmtPurge.o \
	${OBJECTDIR}/proc/CobStmtRead.o \
	${OBJECTDIR}/proc/CobStmtRelease.o \
	${OBJECTDIR}/proc/CobStmtReturn.o \
	${OBJECTDIR}/proc/CobStmtRewrite.o \
	${OBJECTDIR}/proc/CobStmtSearch.o \
	${OBJECTDIR}/proc/CobStmtSet.o \
	${OBJECTDIR}/proc/CobStmtSort.o \
	${OBJECTDIR}/proc/CobStmtStart.o \
	${OBJECTDIR}/proc/CobStmtStop.o \
	${OBJECTDIR}/proc/CobStmtString.o \
	${OBJECTDIR}/proc/CobStmtSubtract.o \
	${OBJECTDIR}/proc/CobStmtTerminate.o \
	${OBJECTDIR}/proc/CobStmtUnlock.o \
	${OBJECTDIR}/proc/CobStmtUnstring.o \
	${OBJECTDIR}/proc/CobStmtUse.o \
	${OBJECTDIR}/proc/CobStmtWrite.o \
	${OBJECTDIR}/procglobal.o \
	${OBJECTDIR}/util/ConfigIO.o \
	${OBJECTDIR}/util/genutil.o \
	${OBJECTDIR}/util/hashmap.o \
	${OBJECTDIR}/util/reswords.o \
	${OBJECTDIR}/y.tab.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/athatomain

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/athatomain: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/athatomain ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/analysis/Analyzer.o: analysis/Analyzer.cpp
	${MKDIR} -p ${OBJECTDIR}/analysis
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/analysis/Analyzer.o analysis/Analyzer.cpp

${OBJECTDIR}/analysis/pugixml.o: analysis/pugixml.cpp
	${MKDIR} -p ${OBJECTDIR}/analysis
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/analysis/pugixml.o analysis/pugixml.cpp

${OBJECTDIR}/ast/CobCommunicationSection.o: ast/CobCommunicationSection.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobCommunicationSection.o ast/CobCommunicationSection.cpp

${OBJECTDIR}/ast/CobConfigurationSection.o: ast/CobConfigurationSection.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobConfigurationSection.o ast/CobConfigurationSection.cpp

${OBJECTDIR}/ast/CobDataDivision.o: ast/CobDataDivision.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobDataDivision.o ast/CobDataDivision.cpp

${OBJECTDIR}/ast/CobDeclaratives.o: ast/CobDeclaratives.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobDeclaratives.o ast/CobDeclaratives.cpp

${OBJECTDIR}/ast/CobEnvironmentDivision.o: ast/CobEnvironmentDivision.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobEnvironmentDivision.o ast/CobEnvironmentDivision.cpp

${OBJECTDIR}/ast/CobFieldRecord.o: ast/CobFieldRecord.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobFieldRecord.o ast/CobFieldRecord.cpp

${OBJECTDIR}/ast/CobFieldRecordList.o: ast/CobFieldRecordList.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobFieldRecordList.o ast/CobFieldRecordList.cpp

${OBJECTDIR}/ast/CobFile.o: ast/CobFile.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobFile.o ast/CobFile.cpp

${OBJECTDIR}/ast/CobFileControl.o: ast/CobFileControl.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobFileControl.o ast/CobFileControl.cpp

${OBJECTDIR}/ast/CobFileDescription.o: ast/CobFileDescription.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobFileDescription.o ast/CobFileDescription.cpp

${OBJECTDIR}/ast/CobFileSection.o: ast/CobFileSection.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobFileSection.o ast/CobFileSection.cpp

${OBJECTDIR}/ast/CobFunctionDivision.o: ast/CobFunctionDivision.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobFunctionDivision.o ast/CobFunctionDivision.cpp

${OBJECTDIR}/ast/CobIOControl.o: ast/CobIOControl.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobIOControl.o ast/CobIOControl.cpp

${OBJECTDIR}/ast/CobIdentificationDivision.o: ast/CobIdentificationDivision.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobIdentificationDivision.o ast/CobIdentificationDivision.cpp

${OBJECTDIR}/ast/CobInputOutputSection.o: ast/CobInputOutputSection.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobInputOutputSection.o ast/CobInputOutputSection.cpp

${OBJECTDIR}/ast/CobLinkageSection.o: ast/CobLinkageSection.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobLinkageSection.o ast/CobLinkageSection.cpp

${OBJECTDIR}/ast/CobLocalStorageSection.o: ast/CobLocalStorageSection.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobLocalStorageSection.o ast/CobLocalStorageSection.cpp

${OBJECTDIR}/ast/CobObject.o: ast/CobObject.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobObject.o ast/CobObject.cpp

${OBJECTDIR}/ast/CobProcedureDivision.o: ast/CobProcedureDivision.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobProcedureDivision.o ast/CobProcedureDivision.cpp

${OBJECTDIR}/ast/CobProject.o: ast/CobProject.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobProject.o ast/CobProject.cpp

${OBJECTDIR}/ast/CobScreenSection.o: ast/CobScreenSection.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobScreenSection.o ast/CobScreenSection.cpp

${OBJECTDIR}/ast/CobSortMergeFileControl.o: ast/CobSortMergeFileControl.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobSortMergeFileControl.o ast/CobSortMergeFileControl.cpp

${OBJECTDIR}/ast/CobWorkingStorageSection.o: ast/CobWorkingStorageSection.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/CobWorkingStorageSection.o ast/CobWorkingStorageSection.cpp

${OBJECTDIR}/ast/RecordKey.o: ast/RecordKey.cpp
	${MKDIR} -p ${OBJECTDIR}/ast
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ast/RecordKey.o ast/RecordKey.cpp

${OBJECTDIR}/cobmain.o: cobmain.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cobmain.o cobmain.c

${OBJECTDIR}/global.o: global.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/global.o global.cpp

${OBJECTDIR}/jgen/JBuildFileGenerator.o: jgen/JBuildFileGenerator.cpp
	${MKDIR} -p ${OBJECTDIR}/jgen
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jgen/JBuildFileGenerator.o jgen/JBuildFileGenerator.cpp

${OBJECTDIR}/jgen/JGenConfig.o: jgen/JGenConfig.cpp
	${MKDIR} -p ${OBJECTDIR}/jgen
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jgen/JGenConfig.o jgen/JGenConfig.cpp

${OBJECTDIR}/jgen/JGenerator.o: jgen/JGenerator.cpp
	${MKDIR} -p ${OBJECTDIR}/jgen
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jgen/JGenerator.o jgen/JGenerator.cpp

${OBJECTDIR}/jgen/JGeneratorEnvironment.o: jgen/JGeneratorEnvironment.cpp
	${MKDIR} -p ${OBJECTDIR}/jgen
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jgen/JGeneratorEnvironment.o jgen/JGeneratorEnvironment.cpp

${OBJECTDIR}/jgen/JMetaClass.o: jgen/JMetaClass.cpp
	${MKDIR} -p ${OBJECTDIR}/jgen
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jgen/JMetaClass.o jgen/JMetaClass.cpp

${OBJECTDIR}/jgen/JMetaField.o: jgen/JMetaField.cpp
	${MKDIR} -p ${OBJECTDIR}/jgen
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jgen/JMetaField.o jgen/JMetaField.cpp

${OBJECTDIR}/jgen/JMetaMethod.o: jgen/JMetaMethod.cpp
	${MKDIR} -p ${OBJECTDIR}/jgen
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jgen/JMetaMethod.o jgen/JMetaMethod.cpp

${OBJECTDIR}/jgen/jcommon.o: jgen/jcommon.cpp
	${MKDIR} -p ${OBJECTDIR}/jgen
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jgen/jcommon.o jgen/jcommon.cpp

${OBJECTDIR}/lex.yy.o: lex.yy.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lex.yy.o lex.yy.c

${OBJECTDIR}/proc/CobParagraphDeclaration.o: proc/CobParagraphDeclaration.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobParagraphDeclaration.o proc/CobParagraphDeclaration.cpp

${OBJECTDIR}/proc/CobProcDivItem.o: proc/CobProcDivItem.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobProcDivItem.o proc/CobProcDivItem.cpp

${OBJECTDIR}/proc/CobSectionDeclaration.o: proc/CobSectionDeclaration.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobSectionDeclaration.o proc/CobSectionDeclaration.cpp

${OBJECTDIR}/proc/CobSentence.o: proc/CobSentence.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobSentence.o proc/CobSentence.cpp

${OBJECTDIR}/proc/CobStmtAccept.o: proc/CobStmtAccept.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtAccept.o proc/CobStmtAccept.cpp

${OBJECTDIR}/proc/CobStmtAdd.o: proc/CobStmtAdd.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtAdd.o proc/CobStmtAdd.cpp

${OBJECTDIR}/proc/CobStmtAlter.o: proc/CobStmtAlter.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtAlter.o proc/CobStmtAlter.cpp

${OBJECTDIR}/proc/CobStmtCall.o: proc/CobStmtCall.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtCall.o proc/CobStmtCall.cpp

${OBJECTDIR}/proc/CobStmtCancel.o: proc/CobStmtCancel.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtCancel.o proc/CobStmtCancel.cpp

${OBJECTDIR}/proc/CobStmtClose.o: proc/CobStmtClose.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtClose.o proc/CobStmtClose.cpp

${OBJECTDIR}/proc/CobStmtCompute.o: proc/CobStmtCompute.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtCompute.o proc/CobStmtCompute.cpp

${OBJECTDIR}/proc/CobStmtContinue.o: proc/CobStmtContinue.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtContinue.o proc/CobStmtContinue.cpp

${OBJECTDIR}/proc/CobStmtDelete.o: proc/CobStmtDelete.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtDelete.o proc/CobStmtDelete.cpp

${OBJECTDIR}/proc/CobStmtDisplay.o: proc/CobStmtDisplay.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtDisplay.o proc/CobStmtDisplay.cpp

${OBJECTDIR}/proc/CobStmtDivide.o: proc/CobStmtDivide.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtDivide.o proc/CobStmtDivide.cpp

${OBJECTDIR}/proc/CobStmtEvaluate.o: proc/CobStmtEvaluate.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtEvaluate.o proc/CobStmtEvaluate.cpp

${OBJECTDIR}/proc/CobStmtExit.o: proc/CobStmtExit.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtExit.o proc/CobStmtExit.cpp

${OBJECTDIR}/proc/CobStmtGenerate.o: proc/CobStmtGenerate.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtGenerate.o proc/CobStmtGenerate.cpp

${OBJECTDIR}/proc/CobStmtGoback.o: proc/CobStmtGoback.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtGoback.o proc/CobStmtGoback.cpp

${OBJECTDIR}/proc/CobStmtGoto.o: proc/CobStmtGoto.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtGoto.o proc/CobStmtGoto.cpp

${OBJECTDIR}/proc/CobStmtIfElse.o: proc/CobStmtIfElse.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtIfElse.o proc/CobStmtIfElse.cpp

${OBJECTDIR}/proc/CobStmtInitialize.o: proc/CobStmtInitialize.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtInitialize.o proc/CobStmtInitialize.cpp

${OBJECTDIR}/proc/CobStmtInitiate.o: proc/CobStmtInitiate.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtInitiate.o proc/CobStmtInitiate.cpp

${OBJECTDIR}/proc/CobStmtInspect.o: proc/CobStmtInspect.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtInspect.o proc/CobStmtInspect.cpp

${OBJECTDIR}/proc/CobStmtMerge.o: proc/CobStmtMerge.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtMerge.o proc/CobStmtMerge.cpp

${OBJECTDIR}/proc/CobStmtMove.o: proc/CobStmtMove.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtMove.o proc/CobStmtMove.cpp

${OBJECTDIR}/proc/CobStmtMultiply.o: proc/CobStmtMultiply.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtMultiply.o proc/CobStmtMultiply.cpp

${OBJECTDIR}/proc/CobStmtOpen.o: proc/CobStmtOpen.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtOpen.o proc/CobStmtOpen.cpp

${OBJECTDIR}/proc/CobStmtPerform.o: proc/CobStmtPerform.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtPerform.o proc/CobStmtPerform.cpp

${OBJECTDIR}/proc/CobStmtPurge.o: proc/CobStmtPurge.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtPurge.o proc/CobStmtPurge.cpp

${OBJECTDIR}/proc/CobStmtRead.o: proc/CobStmtRead.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtRead.o proc/CobStmtRead.cpp

${OBJECTDIR}/proc/CobStmtRelease.o: proc/CobStmtRelease.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtRelease.o proc/CobStmtRelease.cpp

${OBJECTDIR}/proc/CobStmtReturn.o: proc/CobStmtReturn.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtReturn.o proc/CobStmtReturn.cpp

${OBJECTDIR}/proc/CobStmtRewrite.o: proc/CobStmtRewrite.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtRewrite.o proc/CobStmtRewrite.cpp

${OBJECTDIR}/proc/CobStmtSearch.o: proc/CobStmtSearch.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtSearch.o proc/CobStmtSearch.cpp

${OBJECTDIR}/proc/CobStmtSet.o: proc/CobStmtSet.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtSet.o proc/CobStmtSet.cpp

${OBJECTDIR}/proc/CobStmtSort.o: proc/CobStmtSort.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtSort.o proc/CobStmtSort.cpp

${OBJECTDIR}/proc/CobStmtStart.o: proc/CobStmtStart.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtStart.o proc/CobStmtStart.cpp

${OBJECTDIR}/proc/CobStmtStop.o: proc/CobStmtStop.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtStop.o proc/CobStmtStop.cpp

${OBJECTDIR}/proc/CobStmtString.o: proc/CobStmtString.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtString.o proc/CobStmtString.cpp

${OBJECTDIR}/proc/CobStmtSubtract.o: proc/CobStmtSubtract.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtSubtract.o proc/CobStmtSubtract.cpp

${OBJECTDIR}/proc/CobStmtTerminate.o: proc/CobStmtTerminate.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtTerminate.o proc/CobStmtTerminate.cpp

${OBJECTDIR}/proc/CobStmtUnlock.o: proc/CobStmtUnlock.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtUnlock.o proc/CobStmtUnlock.cpp

${OBJECTDIR}/proc/CobStmtUnstring.o: proc/CobStmtUnstring.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtUnstring.o proc/CobStmtUnstring.cpp

${OBJECTDIR}/proc/CobStmtUse.o: proc/CobStmtUse.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtUse.o proc/CobStmtUse.cpp

${OBJECTDIR}/proc/CobStmtWrite.o: proc/CobStmtWrite.cpp
	${MKDIR} -p ${OBJECTDIR}/proc
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/proc/CobStmtWrite.o proc/CobStmtWrite.cpp

${OBJECTDIR}/procglobal.o: procglobal.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/procglobal.o procglobal.cpp

lex.yy.c: token.l y.tab.h
	@echo Performing Custom Build Step
	flex token.l

.NO_PARALLEL:y.tab.c y.tab.h
y.tab.c y.tab.h: token.y
	@echo Performing Custom Build Step
	yacc -d  -v token.y

${OBJECTDIR}/util/ConfigIO.o: util/ConfigIO.cpp
	${MKDIR} -p ${OBJECTDIR}/util
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/util/ConfigIO.o util/ConfigIO.cpp

${OBJECTDIR}/util/genutil.o: util/genutil.cpp
	${MKDIR} -p ${OBJECTDIR}/util
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/util/genutil.o util/genutil.cpp

${OBJECTDIR}/util/hashmap.o: util/hashmap.c
	${MKDIR} -p ${OBJECTDIR}/util
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/util/hashmap.o util/hashmap.c

${OBJECTDIR}/util/reswords.o: util/reswords.c
	${MKDIR} -p ${OBJECTDIR}/util
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/util/reswords.o util/reswords.c

${OBJECTDIR}/y.tab.o: y.tab.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/y.tab.o y.tab.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} lex.yy.c
	${RM} y.tab.c y.tab.h

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
