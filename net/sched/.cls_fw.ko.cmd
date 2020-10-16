cmd_net/sched/cls_fw.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/cls_fw.ko net/sched/cls_fw.o net/sched/cls_fw.mod.o;  true
