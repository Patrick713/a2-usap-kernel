cmd_net/sched/cls_basic.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/cls_basic.ko net/sched/cls_basic.o net/sched/cls_basic.mod.o;  true
