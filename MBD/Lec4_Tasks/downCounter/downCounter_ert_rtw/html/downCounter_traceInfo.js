function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["downCounter:7"] = "downCounter.c:34&downCounter.h:37";
	/* <Root>/Add */
	this.urlHashMap["downCounter:1"] = "downCounter.c:35";
	/* <Root>/Constant1 */
	this.urlHashMap["downCounter:3"] = "downCounter.c:33";
	/* <Root>/Switch */
	this.urlHashMap["downCounter:5"] = "downCounter.c:32,44";
	/* <Root>/Unit Delay */
	this.urlHashMap["downCounter:6"] = "downCounter.c:36";
	/* <Root>/Out1 */
	this.urlHashMap["downCounter:8"] = "downCounter.h:42";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "downCounter"};
	this.sidHashMap["downCounter"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "downCounter:7"};
	this.sidHashMap["downCounter:7"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "downCounter:1"};
	this.sidHashMap["downCounter:1"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "downCounter:3"};
	this.sidHashMap["downCounter:3"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "downCounter:5"};
	this.sidHashMap["downCounter:5"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<Root>/Unit Delay"] = {sid: "downCounter:6"};
	this.sidHashMap["downCounter:6"] = {rtwname: "<Root>/Unit Delay"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "downCounter:8"};
	this.sidHashMap["downCounter:8"] = {rtwname: "<Root>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
