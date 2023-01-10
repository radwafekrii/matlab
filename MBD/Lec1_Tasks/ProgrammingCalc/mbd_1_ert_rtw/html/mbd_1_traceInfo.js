function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["mbd_1:41"] = "mbd_1.c:33,40,47,54&mbd_1.h:38";
	/* <Root>/In2 */
	this.urlHashMap["mbd_1:42"] = "mbd_1.c:34,41,48,55&mbd_1.h:39";
	/* <Root>/Add */
	this.urlHashMap["mbd_1:30"] = "mbd_1.c:35";
	/* <Root>/Divide */
	this.urlHashMap["mbd_1:32"] = "mbd_1.c:56";
	/* <Root>/Product */
	this.urlHashMap["mbd_1:33"] = "mbd_1.c:49";
	/* <Root>/Subtract */
	this.urlHashMap["mbd_1:31"] = "mbd_1.c:42";
	/* <Root>/Out1 */
	this.urlHashMap["mbd_1:40"] = "mbd_1.c:32&mbd_1.h:44";
	/* <Root>/Out2 */
	this.urlHashMap["mbd_1:43"] = "mbd_1.c:39&mbd_1.h:45";
	/* <Root>/Out3 */
	this.urlHashMap["mbd_1:44"] = "mbd_1.c:46&mbd_1.h:46";
	/* <Root>/Out4 */
	this.urlHashMap["mbd_1:45"] = "mbd_1.c:53&mbd_1.h:47";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "mbd_1"};
	this.sidHashMap["mbd_1"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "mbd_1:41"};
	this.sidHashMap["mbd_1:41"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "mbd_1:42"};
	this.sidHashMap["mbd_1:42"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "mbd_1:30"};
	this.sidHashMap["mbd_1:30"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Divide"] = {sid: "mbd_1:32"};
	this.sidHashMap["mbd_1:32"] = {rtwname: "<Root>/Divide"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "mbd_1:33"};
	this.sidHashMap["mbd_1:33"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Subtract"] = {sid: "mbd_1:31"};
	this.sidHashMap["mbd_1:31"] = {rtwname: "<Root>/Subtract"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "mbd_1:40"};
	this.sidHashMap["mbd_1:40"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "mbd_1:43"};
	this.sidHashMap["mbd_1:43"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "mbd_1:44"};
	this.sidHashMap["mbd_1:44"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "mbd_1:45"};
	this.sidHashMap["mbd_1:45"] = {rtwname: "<Root>/Out4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
