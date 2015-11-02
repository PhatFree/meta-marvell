LINUX_VERSION_armada38x = "3.10.70"
MARVELL_LINUX_VERSION = "2015_T1.1"

KBRANCH_armada38x = "linux-3.10.70-15t1"
KBRANCH_clearfog = "linux-3.10.70-15t1-clearfog"
SRCREV_armada38x = "0696bc19e18f163f5ed70baf13edeeaa4d6ff652"
SRCREV_clearfog = "902739f3353150ac9eb69ad995098f3079d862a3"
SRC_URI_armada38x = "git://git@github.com/MarvellEmbeddedProcessors/linux-armada38x.git;branch=${KBRANCH};protocol=ssh;nocheckout=1"

#PV = "${LINUX_VERSION}+git${SRCPV}"       # for versioning by git commit