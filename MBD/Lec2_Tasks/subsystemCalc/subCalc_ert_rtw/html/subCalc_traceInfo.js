function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["subCalc:25"] = "subCalc.c:33,40,47,54&subCalc.h:38";
	/* <Root>/In2 */
	this.urlHashMap["subCalc:29"] = "subCalc.c:34,41,48,55&subCalc.h:39";
	/* <Root>/Out1 */
	this.urlHashMap["subCalc:24"] = "subCalc.c:32&subCalc.h:44";
	/* <Root>/Out2 */
	this.urlHashMap["subCalc:26"] = "subCalc.c:39&subCalc.h:45";
	/* <Root>/Out3 */
	this.urlHashMap["subCalc:27"] = "subCalc.c:46&subCalc.h:46";
	/* <Root>/Out4 */
	this.urlHashMap["subCalc:28"] = "subCalc.c:53&subCalc.h:47";
	/* <S1>/Add */
	this.urlHashMap["subCalc:3"] = "subCalc.c:35";
	/* <S1>/Divide */
	this.urlHashMap["subCalc:5"] = "subCalc.c:49";
	/* <S1>/Product */
	this.urlHashMap["subCalc:6"] = "subCalc.c:56";
	/* <S1>/Subtract */
	this.urlHashMap["subCalc:4"] = "subCalc.c:42";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "subCalc"};
	this.sidHashMap["subCalc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "subCalc:11"};
	this.sidHashMap["subCalc:11"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "subCalc:25"};
	this.sidHashMap["subCalc:25"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "subCalc:29"};
	this.sidHashMap["subCalc:29"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Calculator"] = {sid: "subCalc:11"};
	this.sidHashMap["subCalc:11"] = {rtwname: "<Root>/Calculator"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "subCalc:24"};
	this.sidHashMap["subCalc:24"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "subCalc:26"};
	this.sidHashMap["subCalc:26"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "subCalc:27"};
	this.sidHashMap["subCalc:27"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "subCalc:28"};
	this.sidHashMap["subCalc:28"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<S1>/op1"] = {sid: "subCalc:12"};
	this.sidHashMap["subCalc:12"] = {rtwname: "<S1>/op1"};
	this.rtwnameHashMap["<S1>/op2"] = {sid: "subCalc:13"};
	this.sidHashMap["subCalc:13"] = {rtwname: "<S1>/op2"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "subCalc:3"};
	this.sidHashMap["subCalc:3"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Divide"] = {sid: "subCalc:5"};
	this.sidHashMap["subCalc:5"] = {rtwname: "<S1>/Divide"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "subCalc:6"};
	this.sidHashMap["subCalc:6"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Subtract"] = {sid: "subCalc:4"};
	this.sidHashMap["subCalc:4"] = {rtwname: "<S1>/Subtract"};
	this.rtwnameHashMap["<S1>/add"] = {sid: "subCalc:14"};
	this.sidHashMap["subCalc:14"] = {rtwname: "<S1>/add"};
	this.rtwnameHashMap["<S1>/sub"] = {sid: "subCalc:15"};
	this.sidHashMap["subCalc:15"] = {rtwname: "<S1>/sub"};
	this.rtwnameHashMap["<S1>/division"] = {sid: "subCalc:16"};
	this.sidHashMap["subCalc:16"] = {rtwname: "<S1>/division"};
	this.rtwnameHashMap["<S1>/product"] = {sid: "subCalc:17"};
	this.sidHashMap["subCalc:17"] = {rtwname: "<S1>/product"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
