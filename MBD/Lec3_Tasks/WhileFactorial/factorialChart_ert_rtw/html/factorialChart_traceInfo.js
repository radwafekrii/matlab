function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["factorialChart:5"] = "factorialChart.c:35&factorialChart.h:37";
	/* <Root>/Chart */
	this.urlHashMap["factorialChart:1"] = "factorialChart.c:34,54";
	/* <Root>/Out1 */
	this.urlHashMap["factorialChart:4"] = "factorialChart.h:42";
	/* <S1>:1 */
	this.urlHashMap["factorialChart:1:1"] = "factorialChart.c:40";
	/* <S1>:2 */
	this.urlHashMap["factorialChart:1:2"] = "factorialChart.c:42";
	/* <S1>:3 */
	this.urlHashMap["factorialChart:1:3"] = "factorialChart.c:46";
	/* <S1>:4 */
	this.urlHashMap["factorialChart:1:4"] = "factorialChart.c:47";
	/* <S1>:5 */
	this.urlHashMap["factorialChart:1:5"] = "factorialChart.c:51";
	/* <S1>:6 */
	this.urlHashMap["factorialChart:1:6"] = "factorialChart.c:55";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "factorialChart"};
	this.sidHashMap["factorialChart"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "factorialChart:1"};
	this.sidHashMap["factorialChart:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "factorialChart:5"};
	this.sidHashMap["factorialChart:5"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "factorialChart:1"};
	this.sidHashMap["factorialChart:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "factorialChart:4"};
	this.sidHashMap["factorialChart:4"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "factorialChart:1:1"};
	this.sidHashMap["factorialChart:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "factorialChart:1:2"};
	this.sidHashMap["factorialChart:1:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "factorialChart:1:3"};
	this.sidHashMap["factorialChart:1:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "factorialChart:1:4"};
	this.sidHashMap["factorialChart:1:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "factorialChart:1:5"};
	this.sidHashMap["factorialChart:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "factorialChart:1:6"};
	this.sidHashMap["factorialChart:1:6"] = {rtwname: "<S1>:6"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
