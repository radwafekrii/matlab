function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["matFunc:6"] = "matFunc.c:35&matFunc.h:37";
	/* <Root>/MATLAB Function */
	this.urlHashMap["matFunc:1"] = "matFunc.c:34,51";
	/* <Root>/Out1 */
	this.urlHashMap["matFunc:7"] = "matFunc.h:42";
	/* <S1>:1 */
	this.urlHashMap["matFunc:1:1"] = "matFunc.c:39";
	/* <S1>:1:2 */
	this.urlHashMap["matFunc:1:1:2"] = "matFunc.c:40";
	/* <S1>:1:3 */
	this.urlHashMap["matFunc:1:1:3"] = "matFunc.c:43";
	/* <S1>:1:4 */
	this.urlHashMap["matFunc:1:1:4"] = "matFunc.c:44";
	/* <S1>:1:5 */
	this.urlHashMap["matFunc:1:1:5"] = "matFunc.c:47";
	/* <S1>:1:7 */
	this.urlHashMap["matFunc:1:1:7"] = "matFunc.c:52";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "matFunc"};
	this.sidHashMap["matFunc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "matFunc:1"};
	this.sidHashMap["matFunc:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "matFunc:6"};
	this.sidHashMap["matFunc:6"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "matFunc:1"};
	this.sidHashMap["matFunc:1"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "matFunc:7"};
	this.sidHashMap["matFunc:7"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "matFunc:1:1"};
	this.sidHashMap["matFunc:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:1:2"] = {sid: "matFunc:1:1:2"};
	this.sidHashMap["matFunc:1:1:2"] = {rtwname: "<S1>:1:2"};
	this.rtwnameHashMap["<S1>:1:3"] = {sid: "matFunc:1:1:3"};
	this.sidHashMap["matFunc:1:1:3"] = {rtwname: "<S1>:1:3"};
	this.rtwnameHashMap["<S1>:1:4"] = {sid: "matFunc:1:1:4"};
	this.sidHashMap["matFunc:1:1:4"] = {rtwname: "<S1>:1:4"};
	this.rtwnameHashMap["<S1>:1:5"] = {sid: "matFunc:1:1:5"};
	this.sidHashMap["matFunc:1:1:5"] = {rtwname: "<S1>:1:5"};
	this.rtwnameHashMap["<S1>:1:7"] = {sid: "matFunc:1:1:7"};
	this.sidHashMap["matFunc:1:1:7"] = {rtwname: "<S1>:1:7"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
