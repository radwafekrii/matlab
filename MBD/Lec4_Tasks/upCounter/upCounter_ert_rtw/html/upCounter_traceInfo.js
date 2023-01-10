function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["upCounter:15"] = "upCounter.c:34&upCounter.h:37";
	/* <Root>/Add */
	this.urlHashMap["upCounter:1"] = "upCounter.c:35";
	/* <Root>/Constant1 */
	this.urlHashMap["upCounter:6"] = "upCounter.c:33";
	/* <Root>/Switch */
	this.urlHashMap["upCounter:4"] = "upCounter.c:32,44";
	/* <Root>/Unit Delay */
	this.urlHashMap["upCounter:2"] = "upCounter.c:36";
	/* <Root>/Out1 */
	this.urlHashMap["upCounter:14"] = "upCounter.h:42";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "upCounter"};
	this.sidHashMap["upCounter"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "upCounter:15"};
	this.sidHashMap["upCounter:15"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "upCounter:1"};
	this.sidHashMap["upCounter:1"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "upCounter:6"};
	this.sidHashMap["upCounter:6"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "upCounter:4"};
	this.sidHashMap["upCounter:4"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<Root>/Unit Delay"] = {sid: "upCounter:2"};
	this.sidHashMap["upCounter:2"] = {rtwname: "<Root>/Unit Delay"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "upCounter:14"};
	this.sidHashMap["upCounter:14"] = {rtwname: "<Root>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
