function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["subsys:1"] = "subsys.c:33,40,47,54&subsys.h:38";
	/* <Root>/In2 */
	this.urlHashMap["subsys:2"] = "subsys.c:34,41,48,55&subsys.h:39";
	/* <Root>/Out1 */
	this.urlHashMap["subsys:7"] = "subsys.c:32&subsys.h:44";
	/* <Root>/Out2 */
	this.urlHashMap["subsys:8"] = "subsys.c:39&subsys.h:45";
	/* <Root>/Out3 */
	this.urlHashMap["subsys:9"] = "subsys.c:46&subsys.h:46";
	/* <Root>/Out4 */
	this.urlHashMap["subsys:10"] = "subsys.c:53&subsys.h:47";
	/* <S1>/Add */
	this.urlHashMap["subsys:3"] = "subsys.c:35";
	/* <S1>/Divide */
	this.urlHashMap["subsys:4"] = "subsys.c:56";
	/* <S1>/Product */
	this.urlHashMap["subsys:5"] = "subsys.c:49";
	/* <S1>/Subtract */
	this.urlHashMap["subsys:6"] = "subsys.c:42";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "subsys"};
	this.sidHashMap["subsys"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "subsys:11"};
	this.sidHashMap["subsys:11"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "subsys:1"};
	this.sidHashMap["subsys:1"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "subsys:2"};
	this.sidHashMap["subsys:2"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "subsys:11"};
	this.sidHashMap["subsys:11"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "subsys:7"};
	this.sidHashMap["subsys:7"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "subsys:8"};
	this.sidHashMap["subsys:8"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "subsys:9"};
	this.sidHashMap["subsys:9"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "subsys:10"};
	this.sidHashMap["subsys:10"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "subsys:12"};
	this.sidHashMap["subsys:12"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "subsys:13"};
	this.sidHashMap["subsys:13"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "subsys:3"};
	this.sidHashMap["subsys:3"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Divide"] = {sid: "subsys:4"};
	this.sidHashMap["subsys:4"] = {rtwname: "<S1>/Divide"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "subsys:5"};
	this.sidHashMap["subsys:5"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Subtract"] = {sid: "subsys:6"};
	this.sidHashMap["subsys:6"] = {rtwname: "<S1>/Subtract"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "subsys:14"};
	this.sidHashMap["subsys:14"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S1>/Out2"] = {sid: "subsys:15"};
	this.sidHashMap["subsys:15"] = {rtwname: "<S1>/Out2"};
	this.rtwnameHashMap["<S1>/Out3"] = {sid: "subsys:16"};
	this.sidHashMap["subsys:16"] = {rtwname: "<S1>/Out3"};
	this.rtwnameHashMap["<S1>/Out4"] = {sid: "subsys:17"};
	this.sidHashMap["subsys:17"] = {rtwname: "<S1>/Out4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
