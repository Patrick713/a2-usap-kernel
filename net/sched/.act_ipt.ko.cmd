cmd_net/sched/act_ipt.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/act_ipt.ko net/sched/act_ipt.o net/sched/act_ipt.mod.o;  true
