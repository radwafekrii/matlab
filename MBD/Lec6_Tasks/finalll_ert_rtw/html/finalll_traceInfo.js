function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["finalll:12"] = "finalll.c:131,143,150,157&finalll.h:38";
	/* <Root>/In2 */
	this.urlHashMap["finalll:13"] = "finalll.c:132,144,151,158&finalll.h:39";
	/* <Root>/Chart */
	this.urlHashMap["finalll:1"] = "finalll.c:80,95,110,118,130,142,149,156";
	/* <Root>/Out1 */
	this.urlHashMap["finalll:11"] = "finalll.c:129&finalll.h:44";
	/* <Root>/Out2 */
	this.urlHashMap["finalll:14"] = "finalll.c:141&finalll.h:45";
	/* <Root>/Out3 */
	this.urlHashMap["finalll:15"] = "finalll.c:148&finalll.h:46";
	/* <Root>/Out4 */
	this.urlHashMap["finalll:16"] = "finalll.c:155&finalll.h:47";
	/* <S1>:7 */
	this.urlHashMap["finalll:1:7"] = "finalll.c:85";
	/* <S1>:53 */
	this.urlHashMap["finalll:1:53"] = "finalll.c:121";
	/* <S1>:47 */
	this.urlHashMap["finalll:1:47"] = "finalll.c:113";
	/* <S1>:41 */
	this.urlHashMap["finalll:1:41"] = "finalll.c:100";
	/* <S1>:17 */
	this.urlHashMap["finalll:1:17"] = "finalll.c:137";
	/* <S1>:24 */
	this.urlHashMap["finalll:1:24"] = "finalll.c:138";
	/* <S1>:9 */
	this.urlHashMap["finalll:1:9"] = "finalll.c:86";
	/* <S1>:43 */
	this.urlHashMap["finalll:1:43"] = "finalll.c:101";
	/* <S1>:49 */
	this.urlHashMap["finalll:1:49"] = "finalll.c:114";
	/* <S1>:55 */
	this.urlHashMap["finalll:1:55"] = "finalll.c:122";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "finalll"};
	this.sidHashMap["finalll"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "finalll:1"};
	this.sidHashMap["finalll:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "finalll:12"};
	this.sidHashMap["finalll:12"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "finalll:13"};
	this.sidHashMap["finalll:13"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "finalll:1"};
	this.sidHashMap["finalll:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "finalll:11"};
	this.sidHashMap["finalll:11"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "finalll:14"};
	this.sidHashMap["finalll:14"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "finalll:15"};
	this.sidHashMap["finalll:15"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "finalll:16"};
	this.sidHashMap["finalll:16"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "finalll:1:7"};
	this.sidHashMap["finalll:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:53"] = {sid: "finalll:1:53"};
	this.sidHashMap["finalll:1:53"] = {rtwname: "<S1>:53"};
	this.rtwnameHashMap["<S1>:47"] = {sid: "finalll:1:47"};
	this.sidHashMap["finalll:1:47"] = {rtwname: "<S1>:47"};
	this.rtwnameHashMap["<S1>:41"] = {sid: "finalll:1:41"};
	this.sidHashMap["finalll:1:41"] = {rtwname: "<S1>:41"};
	this.rtwnameHashMap["<S1>:17"] = {sid: "finalll:1:17"};
	this.sidHashMap["finalll:1:17"] = {rtwname: "<S1>:17"};
	this.rtwnameHashMap["<S1>:24"] = {sid: "finalll:1:24"};
	this.sidHashMap["finalll:1:24"] = {rtwname: "<S1>:24"};
	this.rtwnameHashMap["<S1>:9"] = {sid: "finalll:1:9"};
	this.sidHashMap["finalll:1:9"] = {rtwname: "<S1>:9"};
	this.rtwnameHashMap["<S1>:43"] = {sid: "finalll:1:43"};
	this.sidHashMap["finalll:1:43"] = {rtwname: "<S1>:43"};
	this.rtwnameHashMap["<S1>:49"] = {sid: "finalll:1:49"};
	this.sidHashMap["finalll:1:49"] = {rtwname: "<S1>:49"};
	this.rtwnameHashMap["<S1>:55"] = {sid: "finalll:1:55"};
	this.sidHashMap["finalll:1:55"] = {rtwname: "<S1>:55"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
