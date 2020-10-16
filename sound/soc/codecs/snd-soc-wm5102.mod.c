#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x901319d1, "arizona_request_irq" },
	{ 0x1016d61c, "arizona_lhpf4_mode" },
	{ 0xe74093e, "arizona_set_fll" },
	{ 0x2d26f33a, "__pm_runtime_idle" },
	{ 0xbbfc3421, "arizona_free_spk_irqs" },
	{ 0x7c904317, "arizona_lhpf_coeff_put" },
	{ 0x96de1e91, "arizona_init_vol_limit" },
	{ 0x318848f2, "__pm_runtime_disable" },
	{ 0x452286e7, "wm_adsp_early_event" },
	{ 0xd307edaa, "snd_soc_dapm_get_enum_double" },
	{ 0xcba287df, "arizona_init_dai" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xf50af776, "arizona_in_ev" },
	{ 0x4c5fbb88, "snd_soc_component_disable_pin" },
	{ 0x73c63700, "dapm_regulator_event" },
	{ 0x422ef9bb, "arizona_lhpf1_mode" },
	{ 0x729a5ef3, "arizona_mixer_values" },
	{ 0x983a2e20, "wm_adsp_compr_set_params" },
	{ 0x96dff7bc, "regmap_write_async" },
	{ 0x493479f1, "arizona_dvfs_down" },
	{ 0xe69660db, "wm_adsp_compr_trigger" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5d3279ae, "wm_adsp_fw_get" },
	{ 0xc882c206, "snd_soc_put_volsw" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xb7923d10, "arizona_init_dvfs" },
	{ 0xf74e67c8, "snd_soc_get_volsw" },
	{ 0xf8168c31, "wm_adsp2_init" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x93562b0c, "wm_adsp2_component_remove" },
	{ 0x9d85156b, "snd_soc_info_enum_double" },
	{ 0xf567ffbb, "wm_adsp2_preloader_get" },
	{ 0x11e77afc, "wm_adsp_compr_free" },
	{ 0x2013f595, "arizona_dvfs_up" },
	{ 0x75f4d042, "wm_adsp2_preloader_put" },
	{ 0x9c70eac0, "snd_soc_put_volsw_range" },
	{ 0x83340294, "wm_adsp2_component_probe" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x8a9c6df7, "wm_adsp_compr_open" },
	{ 0x3fa19fc2, "wm_adsp_fw_enum" },
	{ 0xc9c29637, "arizona_mixer_tlv" },
	{ 0x44f8771a, "arizona_out_ev" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x997f43a7, "arizona_adsp2_rate_controls" },
	{ 0x13140bee, "arizona_clk_ev" },
	{ 0xa6eb2cd, "snd_soc_add_component_controls" },
	{ 0x1b582db5, "snd_soc_info_volsw_range" },
	{ 0x12480046, "snd_soc_bytes_info" },
	{ 0x246abb4e, "arizona_init_spk" },
	{ 0xd79b4637, "arizona_hp_ev" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1cf976f1, "snd_soc_get_volsw_range" },
	{ 0x36da9235, "wm_adsp_compr_copy" },
	{ 0x5eaae6f0, "wm_adsp_event" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x37196fe2, "arizona_simple_dai_ops" },
	{ 0xaa03c40d, "wm_adsp_compr_get_caps" },
	{ 0xc67fd118, "arizona_free_irq" },
	{ 0xee44765a, "snd_soc_info_volsw" },
	{ 0x76244537, "arizona_set_irq_wake" },
	{ 0x72164c87, "snd_soc_rtdcom_lookup" },
	{ 0xd5b1e892, "arizona_lhpf3_mode" },
	{ 0x964754a0, "arizona_out_vi_ramp" },
	{ 0x6ac310e9, "arizona_isrc_fsl" },
	{ 0xb8933901, "snd_soc_component_init_regmap" },
	{ 0x35a554cc, "arizona_in_vi_ramp" },
	{ 0x7d14541a, "snd_soc_get_enum_double" },
	{ 0xae78bb65, "arizona_dai_ops" },
	{ 0x7f26f273, "arizona_mixer_texts" },
	{ 0x4b324d72, "arizona_init_fll" },
	{ 0x6c3d134d, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88c82718, "devm_snd_soc_register_component" },
	{ 0xb9fe1cf3, "arizona_of_get_audio_pdata" },
	{ 0x392af0c6, "arizona_set_fll_refclk" },
	{ 0xa93530d4, "arizona_init_gpio" },
	{ 0xd6f7728e, "arizona_dvfs_sysclk_ev" },
	{ 0xf7903560, "arizona_out_vd_ramp" },
	{ 0x5472350c, "arizona_in_vd_ramp" },
	{ 0xfd9dc82b, "snd_soc_put_enum_double" },
	{ 0xa62e0f5e, "arizona_eq_coeff_put" },
	{ 0x59c8a0e, "wm_adsp2_remove" },
	{ 0xfab73668, "snd_soc_bytes_get" },
	{ 0x172027bc, "arizona_set_sysclk" },
	{ 0x973b3ace, "arizona_ng_hold" },
	{ 0xd95068fe, "snd_soc_new_compress" },
	{ 0x7a241991, "snd_soc_bytes_put" },
	{ 0xfa54082d, "wm_adsp_compr_handle_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0x2f0fc8a4, "snd_soc_bytes_info_ext" },
	{ 0xead23d82, "wm_adsp2_set_dspclk" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x20c60fe5, "arizona_init_spk_irqs" },
	{ 0x55effa37, "arizona_init_common" },
	{ 0xab400ce5, "wm_adsp_compr_pointer" },
	{ 0xdda15657, "wm_adsp_fw_put" },
	{ 0x5a4cb65c, "snd_soc_dapm_put_enum_double" },
	{ 0x73c6e326, "arizona_lhpf2_mode" },
};

MODULE_INFO(depends, "snd-soc-arizona,snd-soc-wm-adsp,snd-soc-core");


MODULE_INFO(srcversion, "B5766C2CF3A0D264EDFBAA1");
