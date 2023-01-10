function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["factMatWhile:34"] = "factMatWhile.c:58,75&factMatWhile.h:46";
	/* <Root>/In2 */
	this.urlHashMap["factMatWhile:36"] = "factMatWhile.c:43&factMatWhile.h:47";
	/* <Root>/While Iterator
Subsystem1 */
	this.urlHashMap["factMatWhile:21"] = "factMatWhile.c:38,81,102,106";
	/* <Root>/Out1 */
	this.urlHashMap["factMatWhile:35"] = "factMatWhile.c:51&factMatWhile.h:52";
	/* <S1>/Constant */
	this.urlHashMap["factMatWhile:25"] = "factMatWhile.c:70";
	/* <S1>/Product */
	this.urlHashMap["factMatWhile:26"] = "factMatWhile.c:52";
	/* <S1>/Subtract */
	this.urlHashMap["factMatWhile:27"] = "factMatWhile.c:57";
	/* <S1>/Unit Delay */
	this.urlHashMap["factMatWhile:28"] = "factMatWhile.h:38";
	/* <S1>/Unit Delay1 */
	this.urlHashMap["factMatWhile:29"] = "factMatWhile.c:53,66,103&factMatWhile.h:39";
	/* <S1>/Unit Delay2 */
	this.urlHashMap["factMatWhile:30"] = "factMatWhile.c:59,69&factMatWhile.h:40";
	/* <S1>/Unit Delay3 */
	this.urlHashMap["factMatWhile:31"] = "factMatWhile.c:60,74&factMatWhile.h:41";
	/* <S1>/While Iterator */
	this.urlHashMap["factMatWhile:32"] = "factMatWhile.c:39";
	/* <S2>/Compare */
	this.urlHashMap["factMatWhile:24:2"] = "factMatWhile.c:46";
	/* <S2>/Constant */
	this.urlHashMap["factMatWhile:24:3"] = "factMatWhile.c:47";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "factMatWhile"};
	this.sidHashMap["factMatWhile"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "factMatWhile:21"};
	this.sidHashMap["factMatWhile:21"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "factMatWhile:24"};
	this.sidHashMap["factMatWhile:24"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "factMatWhile:34"};
	this.sidHashMap["factMatWhile:34"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "factMatWhile:36"};
	this.sidHashMap["factMatWhile:36"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/While Iterator Subsystem1"] = {sid: "factMatWhile:21"};
	this.sidHashMap["factMatWhile:21"] = {rtwname: "<Root>/While Iterator Subsystem1"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "factMatWhile:35"};
	this.sidHashMap["factMatWhile:35"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>/Number"] = {sid: "factMatWhile:22"};
	this.sidHashMap["factMatWhile:22"] = {rtwname: "<S1>/Number"};
	this.rtwnameHashMap["<S1>/IC"] = {sid: "factMatWhile:23"};
	this.sidHashMap["factMatWhile:23"] = {rtwname: "<S1>/IC"};
	this.rtwnameHashMap["<S1>/Compare To Zero"] = {sid: "factMatWhile:24"};
	this.sidHashMap["factMatWhile:24"] = {rtwname: "<S1>/Compare To Zero"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "factMatWhile:25"};
	this.sidHashMap["factMatWhile:25"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "factMatWhile:26"};
	this.sidHashMap["factMatWhile:26"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Subtract"] = {sid: "factMatWhile:27"};
	this.sidHashMap["factMatWhile:27"] = {rtwname: "<S1>/Subtract"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "factMatWhile:28"};
	this.sidHashMap["factMatWhile:28"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Unit Delay1"] = {sid: "factMatWhile:29"};
	this.sidHashMap["factMatWhile:29"] = {rtwname: "<S1>/Unit Delay1"};
	this.rtwnameHashMap["<S1>/Unit Delay2"] = {sid: "factMatWhile:30"};
	this.sidHashMap["factMatWhile:30"] = {rtwname: "<S1>/Unit Delay2"};
	this.rtwnameHashMap["<S1>/Unit Delay3"] = {sid: "factMatWhile:31"};
	this.sidHashMap["factMatWhile:31"] = {rtwname: "<S1>/Unit Delay3"};
	this.rtwnameHashMap["<S1>/While Iterator"] = {sid: "factMatWhile:32"};
	this.sidHashMap["factMatWhile:32"] = {rtwname: "<S1>/While Iterator"};
	this.rtwnameHashMap["<S1>/Factorial"] = {sid: "factMatWhile:33"};
	this.sidHashMap["factMatWhile:33"] = {rtwname: "<S1>/Factorial"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "factMatWhile:24:1"};
	this.sidHashMap["factMatWhile:24:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/Compare"] = {sid: "factMatWhile:24:2"};
	this.sidHashMap["factMatWhile:24:2"] = {rtwname: "<S2>/Compare"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "factMatWhile:24:3"};
	this.sidHashMap["factMatWhile:24:3"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "factMatWhile:24:5"};
	this.sidHashMap["factMatWhile:24:5"] = {rtwname: "<S2>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
