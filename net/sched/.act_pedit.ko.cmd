cmd_net/sched/act_pedit.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/act_pedit.ko net/sched/act_pedit.o net/sched/act_pedit.mod.o;  true
