function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["stateFlowCalc:8"] = "stateFlowCalc.c:43,51,56&stateFlowCalc.h:43";
	/* <Root>/Chart */
	this.urlHashMap["stateFlowCalc:1"] = "stateFlowCalc.c:35,71,93&stateFlowCalc.h:38";
	/* <Root>/Out1 */
	this.urlHashMap["stateFlowCalc:9"] = "stateFlowCalc.c:42&stateFlowCalc.h:48";
	/* <Root>/Out2 */
	this.urlHashMap["stateFlowCalc:10"] = "stateFlowCalc.c:50&stateFlowCalc.h:49";
	/* <Root>/Out3 */
	this.urlHashMap["stateFlowCalc:11"] = "stateFlowCalc.c:55&stateFlowCalc.h:50";
	/* <Root>/Out4 */
	this.urlHashMap["stateFlowCalc:12"] = "stateFlowCalc.c:60&stateFlowCalc.h:51";
	/* <S1>:7 */
	this.urlHashMap["stateFlowCalc:1:7"] = "stateFlowCalc.c:47,61";
	/* <S1>:8 */
	this.urlHashMap["stateFlowCalc:1:8"] = "stateFlowCalc.c:46";
	/* <S1>:9 */
	this.urlHashMap["stateFlowCalc:1:9"] = "stateFlowCalc.c:62";
	/* <S1>:10 */
	this.urlHashMap["stateFlowCalc:1:10"] = "stateFlowCalc.c:63";
	/* <S1>:11 */
	this.urlHashMap["stateFlowCalc:1:11"] = "msg=rtwMsg_notTraceable&block=stateFlowCalc:1:11";
	/* <S1>:12 */
	this.urlHashMap["stateFlowCalc:1:12"] = "stateFlowCalc.c:64";
	/* <S1>:13 */
	this.urlHashMap["stateFlowCalc:1:13"] = "stateFlowCalc.c:67";
	/* <S1>:14 */
	this.urlHashMap["stateFlowCalc:1:14"] = "stateFlowCalc.c:68";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "stateFlowCalc"};
	this.sidHashMap["stateFlowCalc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "stateFlowCalc:1"};
	this.sidHashMap["stateFlowCalc:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "stateFlowCalc:8"};
	this.sidHashMap["stateFlowCalc:8"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "stateFlowCalc:1"};
	this.sidHashMap["stateFlowCalc:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "stateFlowCalc:9"};
	this.sidHashMap["stateFlowCalc:9"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "stateFlowCalc:10"};
	this.sidHashMap["stateFlowCalc:10"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "stateFlowCalc:11"};
	this.sidHashMap["stateFlowCalc:11"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "stateFlowCalc:12"};
	this.sidHashMap["stateFlowCalc:12"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "stateFlowCalc:1:7"};
	this.sidHashMap["stateFlowCalc:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:8"] = {sid: "stateFlowCalc:1:8"};
	this.sidHashMap["stateFlowCalc:1:8"] = {rtwname: "<S1>:8"};
	this.rtwnameHashMap["<S1>:9"] = {sid: "stateFlowCalc:1:9"};
	this.sidHashMap["stateFlowCalc:1:9"] = {rtwname: "<S1>:9"};
	this.rtwnameHashMap["<S1>:10"] = {sid: "stateFlowCalc:1:10"};
	this.sidHashMap["stateFlowCalc:1:10"] = {rtwname: "<S1>:10"};
	this.rtwnameHashMap["<S1>:11"] = {sid: "stateFlowCalc:1:11"};
	this.sidHashMap["stateFlowCalc:1:11"] = {rtwname: "<S1>:11"};
	this.rtwnameHashMap["<S1>:12"] = {sid: "stateFlowCalc:1:12"};
	this.sidHashMap["stateFlowCalc:1:12"] = {rtwname: "<S1>:12"};
	this.rtwnameHashMap["<S1>:13"] = {sid: "stateFlowCalc:1:13"};
	this.sidHashMap["stateFlowCalc:1:13"] = {rtwname: "<S1>:13"};
	this.rtwnameHashMap["<S1>:14"] = {sid: "stateFlowCalc:1:14"};
	this.sidHashMap["stateFlowCalc:1:14"] = {rtwname: "<S1>:14"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
