function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Chart */
	this.urlHashMap["trafficChart:1"] = "trafficChart.c:19,38,124,143&trafficChart.h:38,39,40";
	/* <Root>/Out1 */
	this.urlHashMap["trafficChart:5"] = "trafficChart.c:54,72,91,110&trafficChart.h:45";
	/* <Root>/Out2 */
	this.urlHashMap["trafficChart:6"] = "trafficChart.c:58,76,95,114&trafficChart.h:46";
	/* <Root>/Out3 */
	this.urlHashMap["trafficChart:7"] = "trafficChart.c:61,79,98,117&trafficChart.h:47";
	/* <S1>:7 */
	this.urlHashMap["trafficChart:1:7"] = "trafficChart.c:66,111";
	/* <S1>:4 */
	this.urlHashMap["trafficChart:1:4"] = "trafficChart.c:55,73,85";
	/* <S1>:6 */
	this.urlHashMap["trafficChart:1:6"] = "trafficChart.c:92,104";
	/* <S1>:5 */
	this.urlHashMap["trafficChart:1:5"] = "trafficChart.c:50";
	/* <S1>:9 */
	this.urlHashMap["trafficChart:1:9"] = "trafficChart.c:87";
	/* <S1>:10 */
	this.urlHashMap["trafficChart:1:10"] = "trafficChart.c:106";
	/* <S1>:11 */
	this.urlHashMap["trafficChart:1:11"] = "trafficChart.c:68";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "trafficChart"};
	this.sidHashMap["trafficChart"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "trafficChart:1"};
	this.sidHashMap["trafficChart:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "trafficChart:1"};
	this.sidHashMap["trafficChart:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Lamp"] = {sid: "trafficChart:2"};
	this.sidHashMap["trafficChart:2"] = {rtwname: "<Root>/Lamp"};
	this.rtwnameHashMap["<Root>/Lamp1"] = {sid: "trafficChart:3"};
	this.sidHashMap["trafficChart:3"] = {rtwname: "<Root>/Lamp1"};
	this.rtwnameHashMap["<Root>/Lamp2"] = {sid: "trafficChart:4"};
	this.sidHashMap["trafficChart:4"] = {rtwname: "<Root>/Lamp2"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "trafficChart:5"};
	this.sidHashMap["trafficChart:5"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "trafficChart:6"};
	this.sidHashMap["trafficChart:6"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "trafficChart:7"};
	this.sidHashMap["trafficChart:7"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "trafficChart:1:7"};
	this.sidHashMap["trafficChart:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "trafficChart:1:4"};
	this.sidHashMap["trafficChart:1:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "trafficChart:1:6"};
	this.sidHashMap["trafficChart:1:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "trafficChart:1:5"};
	this.sidHashMap["trafficChart:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:9"] = {sid: "trafficChart:1:9"};
	this.sidHashMap["trafficChart:1:9"] = {rtwname: "<S1>:9"};
	this.rtwnameHashMap["<S1>:10"] = {sid: "trafficChart:1:10"};
	this.sidHashMap["trafficChart:1:10"] = {rtwname: "<S1>:10"};
	this.rtwnameHashMap["<S1>:11"] = {sid: "trafficChart:1:11"};
	this.sidHashMap["trafficChart:1:11"] = {rtwname: "<S1>:11"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
