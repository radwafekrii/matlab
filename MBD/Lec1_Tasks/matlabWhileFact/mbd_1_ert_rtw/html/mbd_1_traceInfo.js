function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["mbd_1:21"] = "mbd_1.c:33,40,47,54,61,67&mbd_1.h:38";
	/* <Root>/In2 */
	this.urlHashMap["mbd_1:22"] = "mbd_1.c:34,41,48,55,62,73&mbd_1.h:39";
	/* <Root>/Logical
Operator */
	this.urlHashMap["mbd_1:7"] = "mbd_1.c:42";
	/* <Root>/Logical
Operator1 */
	this.urlHashMap["mbd_1:8"] = "mbd_1.c:56";
	/* <Root>/Logical
Operator2 */
	this.urlHashMap["mbd_1:9"] = "mbd_1.c:35";
	/* <Root>/Logical
Operator3 */
	this.urlHashMap["mbd_1:10"] = "mbd_1.c:49";
	/* <Root>/Logical
Operator4 */
	this.urlHashMap["mbd_1:16"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=mbd_1:16";
	/* <Root>/Logical
Operator5 */
	this.urlHashMap["mbd_1:17"] = "mbd_1.c:68";
	/* <Root>/Logical
Operator6 */
	this.urlHashMap["mbd_1:20"] = "mbd_1.c:74";
	/* <Root>/Out1 */
	this.urlHashMap["mbd_1:23"] = "mbd_1.c:32&mbd_1.h:44";
	/* <Root>/Out2 */
	this.urlHashMap["mbd_1:24"] = "mbd_1.c:39&mbd_1.h:45";
	/* <Root>/Out3 */
	this.urlHashMap["mbd_1:25"] = "mbd_1.c:46&mbd_1.h:46";
	/* <Root>/Out4 */
	this.urlHashMap["mbd_1:26"] = "mbd_1.c:53&mbd_1.h:47";
	/* <Root>/Out5 */
	this.urlHashMap["mbd_1:27"] = "mbd_1.c:60&mbd_1.h:48";
	/* <Root>/Out6 */
	this.urlHashMap["mbd_1:28"] = "mbd_1.c:66&mbd_1.h:49";
	/* <Root>/Out7 */
	this.urlHashMap["mbd_1:29"] = "mbd_1.c:72&mbd_1.h:50";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "mbd_1"};
	this.sidHashMap["mbd_1"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "mbd_1:21"};
	this.sidHashMap["mbd_1:21"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "mbd_1:22"};
	this.sidHashMap["mbd_1:22"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Logical Operator"] = {sid: "mbd_1:7"};
	this.sidHashMap["mbd_1:7"] = {rtwname: "<Root>/Logical Operator"};
	this.rtwnameHashMap["<Root>/Logical Operator1"] = {sid: "mbd_1:8"};
	this.sidHashMap["mbd_1:8"] = {rtwname: "<Root>/Logical Operator1"};
	this.rtwnameHashMap["<Root>/Logical Operator2"] = {sid: "mbd_1:9"};
	this.sidHashMap["mbd_1:9"] = {rtwname: "<Root>/Logical Operator2"};
	this.rtwnameHashMap["<Root>/Logical Operator3"] = {sid: "mbd_1:10"};
	this.sidHashMap["mbd_1:10"] = {rtwname: "<Root>/Logical Operator3"};
	this.rtwnameHashMap["<Root>/Logical Operator4"] = {sid: "mbd_1:16"};
	this.sidHashMap["mbd_1:16"] = {rtwname: "<Root>/Logical Operator4"};
	this.rtwnameHashMap["<Root>/Logical Operator5"] = {sid: "mbd_1:17"};
	this.sidHashMap["mbd_1:17"] = {rtwname: "<Root>/Logical Operator5"};
	this.rtwnameHashMap["<Root>/Logical Operator6"] = {sid: "mbd_1:20"};
	this.sidHashMap["mbd_1:20"] = {rtwname: "<Root>/Logical Operator6"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "mbd_1:23"};
	this.sidHashMap["mbd_1:23"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "mbd_1:24"};
	this.sidHashMap["mbd_1:24"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "mbd_1:25"};
	this.sidHashMap["mbd_1:25"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "mbd_1:26"};
	this.sidHashMap["mbd_1:26"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<Root>/Out5"] = {sid: "mbd_1:27"};
	this.sidHashMap["mbd_1:27"] = {rtwname: "<Root>/Out5"};
	this.rtwnameHashMap["<Root>/Out6"] = {sid: "mbd_1:28"};
	this.sidHashMap["mbd_1:28"] = {rtwname: "<Root>/Out6"};
	this.rtwnameHashMap["<Root>/Out7"] = {sid: "mbd_1:29"};
	this.sidHashMap["mbd_1:29"] = {rtwname: "<Root>/Out7"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
