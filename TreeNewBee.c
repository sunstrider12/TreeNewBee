//
//  main.m
//  TreeNewBee
//
//  Created by soulghost on 2021/4/1.
//

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char *v[] = {"皮实", "复盘", "赋能", "加持", "沉淀", "倒逼", "落地", "串联", "协同", "反哺", "兼容", "包装", "重组", "履约", "响应", "量化", "发力", "布局", "联动", "细分", "梳理", "输出", "加速", "共建", "共创", "支撑", "融合", "解耦", "聚合", "集成", "对标", "对齐", "聚焦", "抓手", "拆解", "拉通", "抽象", "摸索", "提炼", "打通", "吃透", "迁移", "分发", "分层", "封装", "辐射", "围绕", "复用", "渗透", "扩展", "开拓", "给到", "死磕", "破圈"};

char *n2[] = {"漏斗", "中台", "闭环", "打法", "纽带", "矩阵", "刺激", "规模", "场景", "维度", "格局", "形态", "生态", "话术", "体系", "认知", "玩法", "体感", "感知", "调性", "心智", "战役", "合力", "赛道", "基因", "因子", "模型", "载体", "横向", "通道", "补位", "链路", "试点"};

char *n3[] = {"新生态", "感知度", "颗粒度", "方法论", "组合拳", "引爆点", "点线面", "精细化", "差异化", "平台化", "结构化", "影响力", "耦合性", "易用性", "便捷性", "一致性", "端到端", "短平快", "护城河"};

char *n4[] = {"底层逻辑", "顶层设计", "交付价值", "生命周期", "价值转化", "强化认知", "资源倾斜", "完善逻辑", "抽离透传", "复用打法", "商业模式", "快速响应", "定性定量", "关键路径", "去中心化", "结果导向", "垂直领域", "归因分析", "体验度量", "信息屏障"};

void swap(char* p[], int idx1, int idx2) {
    char* a = p[idx1];
    p[idx1] = p[idx2];
    p[idx2] = a;
}

int main(int argc, const char * argv[]) {
    srand((unsigned)time(NULL));
    for (int k = 0; k < sizeof(v) / 8; k++) {
        int r = k + rand() % (sizeof(v) / 8 - k);
        swap(v, k, r);
    }
    for (int k = 0; k < sizeof(n2) / 8; k++) {
        int r = k + rand() % (sizeof(n2) / 8 - k);
        swap(n2, k, r);
    }
    for (int k = 0; k < sizeof(n3) / 8; k++) {
        int r = k + rand() % (sizeof(n3) / 8 - k);
        swap(n3, k, r);
    }
    for (int k = 0; k < sizeof(n4) / 8; k++) {
        int r = k + rand() % (sizeof(n4) / 8 - k);
        swap(n4, k, r);
    }
    printf("%s是%s%s，%s行业%s。%s是%s%s%s，通过%s和%s达到%s。%s是在%s采用%s打法达成%s。%s%s作为%s为产品赋能，%s作为%s的评判标准。亮点是%s，优势是%s。%s整个%s，%s%s%s%s。%s是%s达到%s标准。\n", n4[0], v[0], n4[1], v[1], n3[0], n4[2], v[2], n2[0], n4[3], n3[1], n3[2], n3[3], n4[4], n4[5], n2[1], n4[6], n4[7], n4[8], n2[2], n4[9], n2[3], n2[4], n2[5], v[3], n4[10], v[4], n2[6], v[5], n4[11], n3[4], n3[5], n3[6]);
    return 0;
}
